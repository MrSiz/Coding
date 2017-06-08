#include <list>
#include <iostream>

class WheatherData;

class Observer
{
public:
	Observer() = default;
	Observer(const Observer& ) = delete;
	virtual ~Observer(){}
	Observer& operator=(const Observer& ) = delete;
public:
	virtual void update(WheatherData* ) = 0;
};


class WheatherData final
{
private:
	float temprature;
	float humidity;
	float pressure;
	bool changed;
	std::list<Observer*> observers;
public:
	WheatherData()
	{
		changed = false;
	}
	~WheatherData() = default;
	WheatherData(const WheatherData& ) = delete;
	WheatherData& operator=(const WheatherData& ) = delete;
public:
	void notifyObservers()
	{
		for(auto& elem : observers)
		{
			elem->update(this);
		}
	}
	void setChanged()
	{
		changed = true;
	}
	void initialChanged()
	{
		changed = false;
	}
	void modify(float temprature, float humidity, float pressure)
	{
		this->temprature = temprature;
		this->humidity = humidity;
		this->pressure = pressure;
		setChanged();
		notifyObservers();
		initialChanged();
	}
	void registerPerson(Observer* p)
	{
		observers.push_back(p);
	}
	void removePerson(Observer* p)
	{
		for (auto it = observers.begin(); 
			it != observers.end(); ++it)
		{
			if (*it == p)
			{
				observers.erase(it);
			}
		}
	}
	float getTemprature()
	{
		return temprature;
	}
	float getPressure()
	{
		return pressure;
	}
	float getHumidity()
	{
		return humidity;
	}
};

class Person final : public Observer
{
private:
	float temprature;
	float humidity;
	float pressure;
public:
	Person(WheatherData* w)
	{
		w->registerPerson(this);
	}
	void update(WheatherData* w) override final
	{
		this->temprature = w->getTemprature();
		std::cout << "update temprature is " << this->temprature << std::endl;
	}
};

int main()
{
	WheatherData* wheather = new WheatherData();
	
	Person* person = new Person(wheather);
	
	wheather->modify(49.f, 22.f, 33.f);
	
	delete person;
	delete wheather;
	
	return 0;
}
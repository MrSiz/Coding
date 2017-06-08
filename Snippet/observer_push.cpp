#include <iostream>
#include <list>

class Observer
{
public:
	virtual ~Observer(){}
public:
	virtual void update(float temp, float huidity, float pressure) = 0;
};

class Subject
{
public:
	virtual void registerObserver(Observer* o) = 0;
	virtual void removeObserver(Observer* o) = 0;
	virtual void notifyObservers() = 0;
};

class DisplayElement
{
public:
	virtual ~DisplayElement(){}
public:
	virtual void display() = 0; 
};

class WeatherData final : public Subject
{
private:
	std::list<Observer*> observers;
	float temperature;
	float humidity;
	float pressure;
public:
	WeatherData()
	{
		
	}
	void registerObserver(Observer* o) override final
	{
		observers.push_back(o);
	}
	void removeObserver(Observer* o) override final
	{
		for (auto it = observers.begin(); it != observers.end(); ++it)
		{
			if (*it == o)
			{
				observers.erase(it);
			}
		}
	}
	void notifyObservers() override final
	{
		for (auto& elem : observers)
		{
			elem->update(temperature, humidity, pressure);
		}
	}
	void measurementsChanged()
	{
		notifyObservers();
	}
	void setMeasurements(float temperature, float humidity, float pressure)
	{
		this->temperature = temperature;
		this->humidity = humidity;
		this->pressure = pressure;
		measurementsChanged();
	}
};

class CurrentConditionsDisplay final : public Observer, public DisplayElement
{
public:
	float temperature;
	float humidity;
	Subject* weatherData;
	
public:
	CurrentConditionsDisplay(Subject* weatherData)
	{
		this->weatherData = weatherData;
		weatherData->registerObserver(this);
	}
	void update(float temperature, float humidity, float pressure)
	{
		this->temperature = temperature;
		this->humidity = humidity;
		display();
	}
	void display()
	{
		std::cout << "Current conditions: " << temperature
		     << "F degrees and " 	   << humidity << "% humidity" << std::endl;
	}
};


int main()
{
	WeatherData* weatherData = new WeatherData();
	
	CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(weatherData);
	
	weatherData->setMeasurements(80, 65, 30.4f);
	weatherData->setMeasurements(82, 70, 29.2f);
	weatherData->setMeasurements(78, 90, 29.2f);
	
	delete currentDisplay;
	delete weatherData;
	return 0;
}
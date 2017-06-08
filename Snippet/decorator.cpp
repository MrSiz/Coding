#include <string>
#include <iostream>

class Beverage
{
protected:
	std::string describe{"unknow type"};
public:
	Beverage(){}
	virtual ~Beverage(){}
	Beverage(const Beverage&) = default;
	Beverage& operator=(const Beverage&) = default;
public:
	virtual std::string getDescription()
	{
		return describe;
	}
	virtual double cost()
	{
		return .0;
	}
};

class Espresso : public Beverage
{
public:
	Espresso()
	{
		describe = "Espresso";
	}
	double cost() override
	{
		return 1.00;
	}
	std::string getDescription() override
	{
		return this->describe;
	}
};

class CondimentDecorator : public Beverage
{
public:
	virtual std::string getDescription()
	{
		return "unknown decorator.\n";
	}
};

class Mocha : public CondimentDecorator
{
private:
	Beverage* beverage;
public:
	Mocha(Beverage* arg)
	{
		this->beverage = arg;
	}
	~Mocha()
	{

	}
	std::string getDescription() override
	{
		return this->beverage->getDescription() + ", Mocha";
	}
	double cost()
	{
		return .5 + this->beverage->cost();
	}
};


int main()
{
	Beverage* esp = new Espresso();
	Beverage* another = new Mocha(esp);
	std::cout << another->getDescription() << " " << another->cost() << std::endl;
	
	delete another;
	delete esp;
	
	return 0;
}
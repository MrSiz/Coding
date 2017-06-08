#include <iostream>

//定义机器人
class Robot
{
public:
	Robot() = default;
	~Robot() = default;
	Robot(const Robot&) = default;
	Robot& operator=(const Robot&) = default;
public:
	void move()
	{
		std::cout << "Move !" << std::endl;
	}
	void cry()
	{
		std::cout << "Cry !" << std::endl;
	}
};

//定义Dog
class Dog final
{
public:
	Dog() = default;
	~Dog() = default;
	Dog(const Dog&) = delete;
	Dog& operator=(const Dog&) = delete;
public:
	void wangwangjiao()
	{
		std::cout << "Wang Wang Jiao !" << std::endl;
	}
	void kuaipao()
	{
		std::cout << "Kuai Pao !" << std::endl;
	}
};
//定义鸟
class Bird final
{
public:
	Bird() = default;
	~Bird() = default;
	Bird(const Bird&) = delete;
	Bird& operator=(const Bird&) = delete;
public:
	void jijijiao()
	{
		std::cout << "Ji Ji Jiao !" << std::endl;
	}
	void kuaifei()
	{
		std::cout << "Kuai Fei !" << std::endl;
	}
};
//定义适配器
class RobotAdapter final : public Robot
{
private:
	Bird* bird;
	Dog* dog;
public:
	RobotAdapter()
	: bird(new Bird), dog(new Dog) {}
	~RobotAdapter()
	{
		delete bird;
		delete dog;
	}
public:
	void wangwangjiao()
	{
		dog->wangwangjiao();
	}
	void kuaipao()
	{
		dog->kuaipao();
	}
	void jijijiao()
	{
		bird->jijijiao();
	}
	void kuaifei()
	{
		bird->kuaifei();
	}
};

int main()
{
	//测试
	RobotAdapter* robot = new RobotAdapter;
	
	robot->move();
	robot->wangwangjiao();
	robot->jijijiao();
	robot->kuaipao();
	
	delete robot;
	
	return 0;
}
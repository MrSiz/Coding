#include <iostream>
#include <list>

//定义BoardScreen类
class BoardScreen
{
public:
	BoardScreen() = default;
	~BoardScreen() = default;
	BoardScreen(const BoardScreen&) = delete;
	BoardScreen& operator=(const BoardScreen&) = delete;
public:
	void edit()
	{
		std::cout << "Edit !" << std::endl;
	}
	void create()
	{
		std::cout << "Create !" << std::endl;
	}
	void open()
	{
		std::cout << "Open !" << std::endl;
	}
};

//定义抽象类Command
class Command
{
public:
	virtual ~Command(){}
	Command() = default;
public:
	virtual void excute() = 0;
protected:
	BoardScreen* boardScreen;
};

//继承命令类

class OpenCommand : public Command
{
public:
	OpenCommand(BoardScreen* boardScreen)
	{
		this->boardScreen = boardScreen;
	}
	virtual ~OpenCommand(){}
public:
	virtual void excute() override
	{
		this->boardScreen->open();
	}
};

class CreateCommand : public Command
{
public:
	CreateCommand(BoardScreen* boardScreen)
	{
		this->boardScreen = boardScreen;
	}
	virtual ~CreateCommand(){}
public:
	virtual void excute() override
	{
		this->boardScreen->create();
	}
};

class EditCommand : public Command
{
public:
	EditCommand(BoardScreen* boardScreen)
	{
		this->boardScreen = boardScreen;
	}
	virtual ~EditCommand(){}
public:
	virtual void excute() override
	{
		this->boardScreen->edit();
	}
};

//菜单项
class MenuItem
{
private:
	Command* command;
public:
	MenuItem(Command* arg) : command(arg) {}
	~MenuItem(){}
public:
	void click()
	{
		this->command->excute();
	}
};

//菜单
class Menu
{
private:
	std::list<MenuItem*> menuItemList;
public:
	Menu(){}
	~Menu(){}
public:
	void addMenuItem(MenuItem* arg)
	{
		this->menuItemList.push_back(arg);
	}
	bool exit(MenuItem* arg)
	{
		for (const auto & elem : menuItemList)
		{
			if (elem == arg)
				return true;
		}
		return false;
	}
};

int main()
{
	//实例化相关对象
	BoardScreen* boardScreen = new BoardScreen;
	Menu* menu = new Menu;
	
	Command* openCommand = new OpenCommand(boardScreen);
	Command* editCommand = new EditCommand(boardScreen);
	Command* createCommand = new CreateCommand(boardScreen);
	
	MenuItem* openMenuItem = new MenuItem(openCommand);
	MenuItem* editMenuItem = new MenuItem(editCommand);
	MenuItem* createMenuItem = new MenuItem(createCommand);
	
	//把这些菜单项加入菜单中
	menu->addMenuItem(openMenuItem);
	menu->addMenuItem(editMenuItem);
	menu->addMenuItem(createMenuItem);
	
	//点击选项时
	if (menu->exit(openMenuItem))
		openMenuItem->click();
	if (menu->exit(editMenuItem))
		editMenuItem->click();
	if (menu->exit(createMenuItem))
		createMenuItem->click();
	
	
	delete createMenuItem;
	delete editMenuItem;
	delete openMenuItem;
	
	delete createCommand;
	delete editCommand;
	delete openCommand;
	
	delete menu;
	delete boardScreen;
	
	return 0;
}
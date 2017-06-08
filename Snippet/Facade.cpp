#include <iostream>

class DvdPlayer final
{
public:
	DvdPlayer() = default;
	~DvdPlayer() = default;
	DvdPlayer(const DvdPlayer&) = delete;
	DvdPlayer& operator=(const DvdPlayer&) = delete;
public:
	void open()
	{
		std::cout << "open dvd" << std::endl;
	}
};

class Screen final
{
public:
	void open()
	{
		std::cout << "open screen" << std::endl;
	}
};

class HomeFilm
{
private:
	Screen* screen;
	DvdPlayer* dvdPlayer;
public:
	HomeFilm()
	: screen(new Screen), dvdPlayer(new DvdPlayer) {}
	~HomeFilm()
	{
		delete screen;
		delete dvdPlayer;
	}
	void watch()
	{
		screen->open();
		dvdPlayer->open();
	}
};

int main()
{
	HomeFilm* homeFilm = new HomeFilm;
	
	homeFilm->watch();
	delete homeFilm;
	return 0;
}
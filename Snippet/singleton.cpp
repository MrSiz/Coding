// singleton in c++11
// static variable will be thread safe

#include <mutex>

using namespace std;


// class Singleton{
// private:
// Singleton() {}
// public:
// static Singleton* getInstance(){
// static Singleton instance;
// return &instance;
// }
// };

// int main()
// {
// Singleton* ins = Singleton::getInstance();
// return 0;
// }

//another
class Singleton {
private:
	static Singleton* instance;
	Singleton() {}
	static mutex m;
public:
	static Singleton* getInstance() {
		lock_guard<mutex> lock(m);
		if (instance == nullptr) {
			instance = new Singleton;
		}
		return instance;
	}
};
Singleton* Singleton::instance;
mutex Singleton::m;

int main()
{
	Singleton* ptr = Singleton::getInstance();
	return 0;
}


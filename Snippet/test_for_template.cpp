// link: https://www.youtube.com/watch?v=lIJziqkSaBk&list=PLHTh1InhhwT6aWgfHhrvYY3s-lqk0Y9iP&index=13
// a problem

namespace A{
	struct DL{
		double x;
	};
	
	template <int T>
	void f(DL d) {}
}
template <class T>
void f(); // N4605 $14.2/2

int main()
{
	//f(A::D{3.14}); // cannot deduce template parameter T
	f<0>(A::DL{3.14}); // f was not declared in this scope
	
}
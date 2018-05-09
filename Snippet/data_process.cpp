#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::ifstream in;
	in.open("data.txt");
	const auto MAXLINE = 255;
	char str[MAXLINE];
	std::string res;
	if (in.is_open()) {
		while (in) {
			res.push_back('\'');
			in.getline(str, MAXLINE);
			std::cout << str << std::endl;
			res.append(str);
			res.append("',");
		}
	}
	in.close();
	res.pop_back();
	std::ofstream out("out.txt");
	out << res;
	out.close();
//	std::stringstream inString(res);
//	double val;
//	while (inString >> val) {
//		out << val / 1000000<< ',';
//	}
	out.close();
	return 0;
}
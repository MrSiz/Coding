#include <fstream>

int main()
{
  std::ifstream in("input.txt");
  std::ofstream out("output.txt");
  int b,g;
  for(in>>b>>g;b>g;out<<'B',--b);
  for(;b||g;g&&(out<<'G',--g),b&&(out<<'B',--b));
}
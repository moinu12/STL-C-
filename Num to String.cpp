#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int num = 100;

  string str;
  stringstream ss;
  ss << num;
  ss >> str;

  cout << "The integer value is " << num << endl;
  cout << "The string representation of the integer is " << str << endl;
}

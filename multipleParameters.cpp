#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, int age) {
  cout << fname << " Khalil" << age << " years old. \n";
}

int main() {
  myFunction("Abid", 3);
  myFunction("Hassan", 14);
  myFunction("Yasin", 30);
  return 0;
}
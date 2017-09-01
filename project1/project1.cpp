#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  string hello = "Hello, ";
  string meet = ", nice to meet you!\n";
  string greeting;

  cout << "What is your name? ";
  cin >> name;

  greeting = hello + name + meet;

  cout << greeting;

  return 0;
}

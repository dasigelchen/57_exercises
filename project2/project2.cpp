#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string myStr;

  cout << "What is the input string? ";
  cin >> myStr;

  cout << myStr << " has " << myStr.length() << " characters.\n";

  return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

float calc_tip (float bill_amount, float tip_rate)
{
	float tip;

	tip = (bill_amount * tip_rate);

	return tip;
}

int main ()
{
  float bill_amount, tip_rate, tip;

  cout << "What's the bill? $";
  cin >> bill_amount;

  if(bill_amount < 0 || !cin)
  {
  	cout << "Please enter a proper value.\n";
  	return -1;
  }

  cout << "What's the tip percentage? ";
  cin >> tip_rate;

  if(tip_rate < 0 || !cin)
  {
  	cout << "Please enter a proper value.\n";
  	return -1;
  }

  tip = calc_tip(bill_amount, (tip_rate/100));

  cout << fixed;
  cout << setprecision(2);
  cout << "The tip is $" << tip << "\n";
  cout << "The total is $" << (bill_amount + tip) << "\n";

  return 0;
}

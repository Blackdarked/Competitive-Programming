#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int speed, speedlim; 
	string f1 = "$100", f2 = "$270", f3 = "$500";
	cin >> speed >> speedlim;
	
	if (speed <= speedlim)
	{
		cout << "Congratulations, you are within the speed limit!";
	}
	else if (speed >= speedlim + 1 && speed <= speedlim + 20)
	{
		cout << "You are speeding and your fine is " << f1 << ".";
	}
	else if (speed >= speedlim + 21 && speed <= speedlim + 30)
	{
		cout << "You are speeding and your fine is " << f2 << ".";
	}
	if (speed >= speedlim + 30)
	{
		cout << "You are speeding and your fine is " << f3 << ".";
	}
	return 0;
}
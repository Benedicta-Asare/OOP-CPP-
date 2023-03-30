//Function to find a number raised to a power
#include <iostream>
using namespace std;

double power(double, int);

int main()
{
	int p;
	double n,r;
	cout << "Enter number: ";
	cin >> n;
	cout << "Enter exponent: ";
	cin >> p;
	r = power(n, p);
	cout << "Result is " << r;

	return 0;
}

double power(double n, int p)
{
	double x = 1.0;
	for(int i = 1; i <= p; i++)
		x *= n;
	return x;
}
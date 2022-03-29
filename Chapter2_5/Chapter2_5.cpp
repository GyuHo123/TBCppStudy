#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	
	
	cout << 314159.2e-5 << endl;
	cout << 314.1e-1 << endl;
	
	cout << setprecision(3);

	cout << 1000e-6f << endl;
	
	cout << setprecision(4);

	cout << 123000.2e-3 << endl;
	
	cout << setprecision(12);

	cout << 0.1e-10 << endl;

	cout << setprecision(3);

	cout << 23456.0e4f << endl;
	
	return 0;
}
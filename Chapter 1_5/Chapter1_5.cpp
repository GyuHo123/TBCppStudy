#include <iostream>

using namespace std;

int addTwoNumbers(int x, int y)
{
	return x + y;
}

int main()

{
	int x, y = 0;
	cin >> x;

	cin >> y;

	cout << addTwoNumbers(x, y) << endl;

	return 0;
}
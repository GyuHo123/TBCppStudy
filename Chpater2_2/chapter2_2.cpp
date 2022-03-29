#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;

	short s = 1; // 2 bytes = 2 * 8 bits = 16bits
	int i = 1;	 // 4 bytes
	long l = 1;
	long long ll = 1;

	/*cout << std::pow(2, sizeof(short) * 8 - 1) << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;*/

	s = std::numeric_limits<short>::min();

	cout << "min() " << s << endl;

	s = s - 1; // 32768

	cout << " " << s << endl; // overflow

	return 0;
}
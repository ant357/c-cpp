// An example of implicit conversion

#include <iostream>
using namespace std;

int main()
{
	int x = 10; // integer x
	char y = 'a'; // character c
    double m=9.8;
    m=x;

	// y implicitly converted to int. ASCII
	// value of 'a' is 97
	x = x + y;

	// x is implicitly converted to float
	float z = x + 1.0;
    

	cout << "x = " << x << endl
		<< "y = " << y << endl
		<< "z = " << z << endl
        << "m = " << m << endl;

	return 0;
}

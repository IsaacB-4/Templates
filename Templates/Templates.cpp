//Isaac Booth
//CIS 1202 101
//May 2, 2021

#include <iostream>
using namespace std;

//Template for double and float
template <class T>
T half(T number)
{
	return number / 2;
}

int main()
{
	//Driver for half
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}
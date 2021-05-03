//Isaac Booth
//CIS 1202 101
//May 2, 2021

#include <iostream>
#include <cmath>
using namespace std;

//Template for double and float
template <class T>
T half(T number)
{
	return number / 2;
}
//Overload for int
int half(int number)
{
	double holder = number; 
	round(holder / 2); 
	return static_cast<int>(holder);
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
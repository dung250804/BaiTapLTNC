#include <iostream>

using namespace std;

struct point
{
	double x;
	double y;
};

void print1(point a)
{
	cout << &a << endl;
}

void print2(point &a)
{
	cout << &a << endl;
}


int main ()
{
	point a;

	cin >> a.x >> a.y; 

	print1(a);
	print2(a);
	cout << &a;
	
}


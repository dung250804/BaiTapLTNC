#include <iostream>
#include <cmath>

using namespace std;

void printTri(int a)
{
	for(int i = 1; i <= a; i++)
	{
		for(int j = 0; j < a - i; j++)
		{
			cout << " ";
		}
		for(int j = 0; j < 2*i - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	int a;
	cin >> a ;
	printTri(a);
}

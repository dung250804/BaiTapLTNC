#include <iostream>
#include <string>
using namespace std;

void checkArray(int a[])
{
	int *aPtr = a;
	cout << aPtr << " " << *aPtr;
}

int main() 
{
	int a[10];
	for(int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	int *aPtr = a;
	checkArray(a);
	cout << endl << aPtr << " " << *aPtr;
}

//KQ = nhau, truyen vao theo co che con tro

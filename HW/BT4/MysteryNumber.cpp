#include <iostream>
#include <math.h>
using namespace std;

void bSort(int a[], int	 n)
{
	int temp;
    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i ; j++)
		{
			if (a[j] > a[j+1])
			{
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
			}
		}
	}
}

int main() 
{
	int n;
	cin >> n;
	int a[n], b[n+1];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n+1; i++)
	{
		cin >> b[i];
	}
	bSort(a, n);
	bSort(b, n+1);
	
	for(int i = 0; i < n; i++)
	{
		if(a[i] != b[i])
		{
			cout << b[i];
			return 0;
		}
	}
	cout << b[n];
}

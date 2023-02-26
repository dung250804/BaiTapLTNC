#include <iostream>
#include <string>
using namespace std;


int main() 
{
	int test;
	cin >> test;
	for(int i = 0; i < test; i++)
	{
		int n, sumL = 0, sumR = 0, check = 0;
		cin >> n;
		int a[n];
		for(int j = 0; j < n; j++)
		{
			cin >> a[j];
		}
		for(int j = 1; j < n; j++)		//check a[0]
		{
			sumR += a[j];
		}
		for(int j = 0; j < n-1; j++)	//check a[n]
		{
			sumL += a[j];
		}
		if(sumR == 0 || sumL == 0) check++;
		for(int j = 1; j < n; j++)
		{
			sumL = 0; sumR = 0;
			for(int k = 0; k < j; k++)
			{
				sumL += a[k];
			}
			for(int k = j + 1; k < n; k++)
			{
				sumR += a[k];
			}
			if(sumL == sumR) check++;
		}
		if(check != 0) cout << "YES";
		else cout << "NO";
	}
}

#include<iostream>
using namespace std;
void tripler(int& n){ n = 3*n; }
int main()
{
	int  n, check = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i] == a[j])
				check++;
		}
	}
	if(check != 0) cout << "Yes";
	else cout << "No";
	
}

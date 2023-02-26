#include<iostream>
#include<string>
using namespace std;
void tripler(int& n){ n = 3*n; }
int main()
{
	string a;
	cin >> a;
	int n = a.length();
	int check = 0;
	for(int i = 0; i < n / 2; i++)
	{
		if(a[i] == a[n-1-i])
		{
			check++;
		}
	}
	if(check == n/2) cout << "Yes";
	else cout << "No";
}

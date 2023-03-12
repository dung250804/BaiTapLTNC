#include <iostream>
#include <string>
using namespace std;

void reversE(string& a)
{
	int n = a.length();
	for(int i = 0; i < n / 2; i++)
	{
		swap(a[i], a[n-1-i]);
	}
}
int main() 
{
	int n;
	cin >> n;
	string s[n], a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	for(int i = 0; i < n; i++)
	{
		a[i] = s[i];
	}
	for(int i = 0; i < n; i++)
	{
		reversE(a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(s[i] == a[j])
			{
				if(s[i].length() % 2 == 1)
				{
					cout << s[i].length() << " " << (s[i])[s[i].length() / 2];
					return 0;
				}
			}
		}
	}
	
}

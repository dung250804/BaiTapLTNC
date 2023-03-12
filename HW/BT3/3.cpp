#include <iostream>
#include <math.h>
using namespace std;
bool check(int x)
{
	int temp = x;
	int n = 0, dem = 0;
	while(temp != 0)
	{
		n++;
		temp /= 10;
	}
	for(int i = 0; i < n /2; i++)
	{
		int a = (int)(x / pow(10, n - i - 1)) % 10;
		int b = (int)(x / pow(10, i)) % 10;
		if(a == b)
			dem++;
	}
	if(dem == n / 2)
		return true;
	return false;
}

int main() {
	int n;
	cin >> n;    
	for(int i = 0; i < n; i++)
	{
		int a, b, count = 0;
		cin >> a >> b;
		for(int j = a ; j <= b; j++)
		{
			if(check(j))
				count++;
		}
		cout << count << endl;
	}
}

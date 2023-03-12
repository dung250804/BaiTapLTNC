#include <iostream>
#include <cmath>

using namespace std;

void ucln (int a, int b)
{
	a = abs(a);
    b = abs(b);
    if(a > 0 && b > 0)
	{
    	while(a != b)
		{
    		if(a > b) a -= b;
    		else if(b > a) b -= a;
		}
		cout << a << endl;
		if(a == 1) cout << "day la 2 so nguyen to cung nhau";
		else cout << "day khong la 2 so nguyen to cung nhau";
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	ucln(a, b);
}

#include<iostream>
using namespace std;

int main()
{
    int n, hleft1, hleft2, hleft3;
    cin >> n;
    long long sum = 0;
    hleft1 = n - 100;
    hleft2 = n - 150;
    hleft3 = n - 200;
    if(hleft1 < 0) hleft1 = 0; if(hleft1 > 50) hleft1 = 50;
    if(hleft2 < 0) hleft2 = 0; if(hleft2 > 50) hleft2 = 50;
    if(hleft3 < 0) hleft3 = 0;
    (n <= 100) ? sum = n * 12000 : (sum = 1200000 + hleft1 * 16000 + hleft2 * 20000 + hleft3 * 25000);
    cout << sum;
    
}

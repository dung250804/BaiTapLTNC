#include<iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    long long a[50];
    a[0] = 1;
    a[1] = 1;
    a[2] = 2;
    for(int i = 3; i<50; i++){
        a[i] = a[i-1] + a[i-2];
    }
    for(int i = 0; i<50;i++){
        if(n == a[i]){
            count++;
        }
    }
    if(count != 0) cout << "Thuoc day Fibonacci\n";
    else cout << "Khong thuoc day Fibonacci\n";
    for(int i = 0; i < 50; i++){
        if(a[i] <= n){
            cout << a[i] << " ";
        }
    }
}

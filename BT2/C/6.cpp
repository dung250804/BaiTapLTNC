#include<iostream>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = i+1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[j] << " ";
        }
        for(int j = 0; j < n-1; j++){
            swap(a[j],a[j+1]);
        }
        cout << endl;
    }
}

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    int a[100];
    for(int i = 0; i < 100; i++){
        a[i] = 0;
    }
    int j = 0;
    while(true){
        cin >> a[j];
        if(a[j] < 0) break;
        j++;
    }
    for(int i = 0; i < 99; i++){
        if(a[i] == a[i+1])
            a[i] = 0;
    }
    for(int i = 0; i < 100; i++){
        if(a[i] != 0)
            cout << a[i] << " ";
    }
}

#include<iostream>
#include<math.h>
using namespace std;

void SoNguyenTo(int n);
void SoHoanHao(int n);
void SoChinhPhuong(int n);

int main()
{
    int n;
    cin >> n;
    SoNguyenTo(n);
    SoHoanHao(n);
    SoChinhPhuong(n);
}

void SoNguyenTo(int n)
{
    int temp = 0;
    cout << 2 << " ";
    for(int i = 3; i <= n; i++){
        for(int j = 2; j < i; j++){
            if(i%j == 0) temp++;
        }
        if(temp == 0) cout << i << " ";
        else temp = 0;
    }
    cout << endl;
}

void SoHoanHao(int n)
{
    int sum = 0;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i/2 ; j++){
            if(i%j == 0){
                sum = sum + j;
            }
        }
        if(i == sum){
            cout << i << " ";
        }sum = 0;
    }
    cout << endl;
}

void SoChinhPhuong(int n)
{
    for(int i = 2; i <= n; i++){
         for(int j = 1; j < i; j++){
             if((j*j) == i){
                 cout << i << " ";
             }
         }
    }
}


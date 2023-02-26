#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    if(n == 2 || n == 3){
        cout << "yes";
        return 0;
    }else if(n==1){
        cout << "no";
        return 0;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) count++;
    }
    if(count == 0) cout << "yes";
    else cout << "no";
}

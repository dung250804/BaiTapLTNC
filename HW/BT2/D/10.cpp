#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    double f, c, k;
    cin >> f;
    c = (f-32)*5/9;
    k = c + 273.15;
    cout << fixed << setprecision(0) << f ;
    cout << fixed << setprecision(2) << " " << c << " " << k;
}

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

void FtoC(double n);
void FtoK(double n);

int main()
{
    double min, max, step;
    cin >> min >> max >> step;
    if(min > max) return 0;
    do{
        cout << fixed << setprecision(2) << min << " ";
        FtoC(min);
        FtoK(min);
        min += step;
    }while(min <= max);
}

void FtoC(double n){
    double res;
    res = (n-32)*5/9;
    cout << fixed << setprecision(2) << res << " ";
}

void FtoK(double n){
    double res;
    res = (n-32)*5/9;
    res = res + 273.15;
    cout << fixed << setprecision(2) << res << endl;
}

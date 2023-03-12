#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double delta, x1, x2;
    delta = pow(b,2) - 4 * a * c;
    if(delta > 0){
        x1 = (-b - sqrt(delta)) / (2*a) ;
        x2 = (-b + sqrt(delta)) / (2*a) ;
        cout << fixed << setprecision(2) << x1 << endl << x2;
    }else if(delta == 0){
        x1 = -b /(2*a);
        cout << fixed << setprecision(2) << x1;
    }else{
        x1 = -b /(2*a);
        delta = abs(delta);
        double PhanAo = sqrt(delta) / (2*a);
        cout << fixed << setprecision(2) << x1 << " " << -PhanAo << endl
             << x1 << " " << PhanAo;
    }
}

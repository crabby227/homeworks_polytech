#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double H, V, a, T, x, y, t;
    double g = 9.8;

    cout<< "H = \t";
    cin >> H;
    cout<< "V = \t";
    cin >> V;
    cout<< "a = \t";
    cin >> a;

    if((1 + (2*g*H/pow(V,2)*pow(sin(a), 2))) >= 0) {
        T = (V * sin(a)/g) * (1 + sqrt(2*g*H/pow(V,2)*pow(sin(a), 2)));
        x = V*T*cos(a);
        y = H + V*T*sin(a) - 0.5*g*pow(T,2);

        cout<< "x = "<< x << endl;
        cout<< "y = "<< y << endl;
    }
    return 0;
    
}
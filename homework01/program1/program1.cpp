#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double w, x, A, T, k, f;
    long double pi = 3.14159265358;
    
    cout<< "k = \t";
    cin >> k;
    cout<< "A = \t";
    cin >> A;
    cout<< "w = \t";
    cin >> w;

    f = asin(1/k);
    T = ((pi/2 - f)/w);
    x = A * sin(w*T + f);

    cout<< "T = " << T << endl;
    cout<< "x = "<< x << endl;
    return 0;

}
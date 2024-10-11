#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x, f, g;

    cout<< "x = \t";
    cin >> x;

    if(x > -4 && x < -1){
        g = abs(x + 6)/(abs(x+3)-3);
    }else if(x == -1.5){
        g = sqrt(5-x-2);
    }else if(x >= 5){
        g = log(x+10)-2;
    }else{
        cout<< "x out of range"<< endl;
        return 0;
    }

    if(g < -2){
        f = abs(g/(1-g));
    }else if(g >= -2 && g <= 1){
        f = pow((g+2),2);
    }else{
        cout<< "g is out of range"<< endl;
        return 0;
    }

    cout<< "f = " << f << endl;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n, operations, i;
    double x, last_term;
    long double result;

    cout << "Enter the number of progression terms: " << endl;
    cin >> n;
    cout << "Choose the option: " << endl;
    cout << "1. e^x"<< endl;
    cout << "2. ln(1+x)" << endl;
    cout << "3. sin(x)" << endl;
    cout << "4. cos(x)" << endl;
    cout << "5. 1/(1-x)^2" << endl;
    cin >> operations;

    switch (operations){

        case 1:{
             cout << "Enter x: "<< endl;
        cin >> x;
            result = 1.0;
            last_term=1.0;
            cout << "Serie terms: " << endl;
            for (i=1;i<=n;i++){
                last_term *= x/i;
                cout << last_term << " ";
                result+=last_term;
            }
            cout << endl;
            cout << "Result: " << result << endl;
            break;
        }

        case 2: {
            do{
         cout << "Enter x: " << endl;
        cin >> x;
            }while (abs(x)>1);
             cout << "Serie terms: " << endl;
             result = 0.0;
             last_term=1.0;
            for (i=1;i<=n;i++){
                last_term=(pow(-1,i+1)*(pow(x,i)/i));
                result+=last_term;
                         cout << last_term << " ";
            }
            cout << endl;
             cout << "Result: " << result << endl;
             break;
        }

        case 3:{
            cout << "Enter x: " << endl;
        cin >> x;
        last_term=x;
        result=x;
        cout << "Serie terms:  " << endl;
        for (i=1;i<=n;i++){
            last_term*=((-1*x*x)/((2*i)*((2*i)+1)));
            
            result+=last_term;
            cout << last_term << " ";
        }
        cout << endl;
        cout << "Result: " << result << endl;
        break;
        }

        case 4: {
            cout << "Enter x: " << endl;
        cin >> x;
         cout << "Serie terms:  " << endl;
        result = 1.0;
        last_term=1;
         for (i=1;i<=n;i++){
        last_term*=(-1*x*x/((2*i-1)*(2*i)));
        result+=last_term;
        cout << last_term << " ";
        }
         cout << endl;
        cout << "Result: " << result << endl;
        break;
    }

    case 5: {
         do{
         cout << "Enter x: "<<endl;
        cin >> x;
            }while (abs(x)>1);
             cout << "Serie terms:  " << endl;
        result = 1.0;
        last_term=1;
         for (i=1;i<=n;i++){
        last_term=((i+1)*pow(x,i));
        result+=last_term;
        cout << last_term << " ";
        }
         cout << endl;
        cout << "Result: " << result << endl;
    }
    }
    
return 0;
}
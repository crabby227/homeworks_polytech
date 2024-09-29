#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int A, B, i, num_devisorsA=0, sum_devisorsA=0, num_devisorsB=0, sum_devisorsB=0, sum_devisors, multiply_devisors,\
    nechet_devisorsA=1, chet_devisorsB=1, sum_devisors2, mutual_devisor;

    do{
        cout << "Enter the A: ";
        cin >> A;
    }while(A<10 || A>1000);

    do{
        cout << "Enter the B: ";
        cin >> B;
    }while(B<10 || B>1000);

    for(i=1; i<=A; i++){
        if(A%i == 0){
            num_devisorsA++;
            sum_devisorsA += i;
        }
    }
    for(i=1; i<=B; i++){
        if(B%i == 0){
            num_devisorsB++;
            sum_devisorsB += i;
        }
    }

    sum_devisors = sum_devisorsA + sum_devisorsB;
    multiply_devisors = num_devisorsA * num_devisorsB;

    for(i=1; i<=A; i++){
        if(A%i == 0 && i%2!= 0){
            nechet_devisorsA *= i;
        }
    }

    for(i=1; i<=B; i++){
        if(B%i == 0 && i%2 == 0){
            chet_devisorsB *= i;
        }
    }
    
    sum_devisors2 = nechet_devisorsA + chet_devisorsB;

    for(i=1; i<=A && i<=B; i++){
        if(A%i == 0 && B%i == 0){
            mutual_devisor = i;
        }
    }
    if(mutual_devisor == 1){
        cout << "Числа простые вместе" << endl;
    }

    cout << "1. Сумма делителей = " << sum_devisors << endl;
    cout << "2. Произведение количества делителей = " << multiply_devisors << endl;
    cout << "3. Сумма произведения нечетных делителей A на произведение четных делителей В = " << sum_devisors2 << endl;
    cout << "4. Наибольший общий делитель = " << mutual_devisor << endl;

    return 0;
}

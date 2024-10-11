#include <iostream>
#include <cmath>
using namespace std;
int main() {

    char item_category;
    float s = 1, final_price, loan_cost;
    int price, client_category, payment_method, contributions, interest_rate, instalments, loan_type;

    cout << "Enter the price of the item" << endl;
    cin >> price;
    cout << "Enter the item category (A, B or C):  " << endl;
    cin >> item_category;
    cout << "Enter the client category: (1 - excellent, 2 - good, 3 - medium, 4 - bad) " << endl;
    cin >> client_category;

    switch (client_category) {
        case 1: 
        cout << "Enter the method of payment: (1 - cash, 2 - bank card, 3 - credit)" << endl;
        cin >> payment_method;

        switch (item_category) {
        case 'A':
        s = s - 0.4;
        break;
        case 'B':
        s = s - 0.3;
        break;
        case 'C':
        s = s - 0.2;
        break;
        default:
        cout << "Error" << endl;
        return 0;
    }
        break;
        case 2:
        cout << "Enter the method of payment: (1 - cash, 2 - bank card, 3 - credit)" << endl;
        cin >> payment_method;

        switch (item_category) {
        case 'A':
        s = s - 0.3;
        break;
        case 'B':
        s = s - 0.2;
        break;
        case 'C':
        s = s - 0.1;
        break;
        default:
        cout << "Error" << endl;
        return 0;
    }
        break;
        case 3:
        cout << "Enter the method of payment: (1 - cash, 2 - bank card)" << endl;
        cin >> payment_method;

        switch (item_category) {
        case 'A':
        s = s - 0.2;
        break;
        case 'B':
        s = s - 0.1;
        break;
        case 'C':
        s = s;
        break;
        default:
        cout << "Error" << endl;
        return 0;
    }
        break;
        case 4:
        cout << "The only accessible method of payment is by cash" << endl;
        payment_method = 1;

        switch (item_category) {
        case 'A':
        s = s;
        break;
        case 'B':
        s = s + 0.5;
        break;
        case 'C':
        s = s + 0.1;
        break;
        default:
        cout << "Error" << endl;
        return 0;
    }
        break;
        default:
        cout << "Error" << endl;
        return 0;
    }
    switch (payment_method) {
        case 1:
        final_price = price * s;
        break;
        case 2:
        cout << "Enter the number of contributions" << endl;
        cin >> contributions;
        cout << "Enter the interest rate (from 3 to 15%)" << endl;
        cin >> interest_rate;
        final_price = price * (1 + interest_rate * contributions/100) * s;
        cout << "Final price:" << final_price << endl;
        return 0;
        break;
        case 3:
        cout << "Enter the number of payments by instalments (from 1 to 6)" << endl;
        cin >> instalments;
        if (instalments < 1 || instalments > 6) {
            cout << "Error" << endl;
            return 0;
        }
        cout << "Enter the type of loan: (1 - platinum, 2 - business)" << endl;
        cin >> loan_type;

        switch (loan_type) {
        case 1: 
        loan_cost = 1.05;
        break;
        case 2:
        loan_cost = 1.02;
        break;
        default:
        cout << "Error" << endl;
            return 0;
        }
        final_price = price * s;
        final_price = final_price * pow((loan_cost),instalments);
    }
cout << "The final price:" << final_price << endl;
return 0;
}
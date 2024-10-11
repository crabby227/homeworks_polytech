#include <iostream>
using namespace std;
int main(){

  int opt, num, digit, originalNum, reversedNum = 0, sum = 0, product = 1, minDigit = 9, maxDigit = 0, count = 0;
  char cont;

  do {
    cout << "Select an option from 1 to 7:" << endl;
    cout << "1. Enter a number in the range between 1000 and 999999999" << endl;
    cout << "2. Print the digits of the number" << endl;
    cout << "3. Count how many digits the number has" << endl;
    cout << "4. Return the lowest and highest digits of the number" << endl;
    cout << "5. Return the sum of the digits of the number" << endl;
    cout << "6. Return the product of the odd digits"<< endl;
    cout << "7. Calculate the inverted version of the number" << endl;
    cout << "Enter option: ";
    cin >> opt;

    switch (opt) {
      case 1:{
        do {
            cout << "Enter the number: " << endl;
            cin >> num;
            if (num < 1000 || num > 999999999) {
              cout << "Try again!\n";
            }
          } while (num < 1000 || num > 999999999);
          break;
      }

      case 2:{
        cout << "Enter the number: " << endl;
        cin >> num;
        cout << "Digits of the number: " << endl;
        originalNum = num;
        while (originalNum > 0) {
          digit = originalNum % 10;
          cout << digit << " ";
          originalNum /= 10;
        }
        cout << endl;
        break;
      }

      case 3:{
        cout << "Enter the number: " << endl;
        cin >> num;
        originalNum = num;
        while (originalNum > 0) {
          originalNum /= 10;
          count++;
        }
        cout << "How many digits the number has: " << count << endl;
        break;
      }

      case 4:{
        cout << "Enter the number: " << endl;
        cin >> num;
        originalNum = num;
        while (originalNum > 0) {
          digit = originalNum % 10;
          if (digit < minDigit) {
            minDigit = digit;
          }
          if (digit > maxDigit) {
            maxDigit = digit;
          }
          originalNum /= 10;
        }
        cout << "The highest digit: " << maxDigit << endl;
        cout << "The lowest digit: " << minDigit << endl;
        break;
      }

      case 5:{
        cout << "Enter the number: " << endl;
        cin >> num;
        originalNum = num;
        while (originalNum > 0) {
          digit = originalNum % 10;
          sum += digit;
          originalNum /= 10;
        }
        cout << "The sum of the digits of the number: " << sum << endl;
        break;
      }

      case 6:{
        cout << "Enter the number: " << endl;
        cin >> num;
        originalNum = num;
        while (originalNum > 0) {
          digit = originalNum % 10;
          if (digit % 2 != 0) {
            product *= digit;
          }
          originalNum /= 10;
        }
        cout << "The product of the odd digits: " << product << endl;
        break;
      }

      case 7:{
        cout << "Enter the number: " << endl;
        cin >> num;
        originalNum = num;
        while (originalNum > 0) {
          digit = originalNum % 10;
          reversedNum = reversedNum * 10 + digit;
          originalNum /= 10;
        }
        cout << "The inverted version of the number: " << reversedNum << endl;
        break;
      }

      default:
        cout << "Error" << endl;
        break;
    }

   cout << "Do you want to continue [Y|N]? " << endl;
    cin >> cont;
  }while (cont == 'Y' || cont == 'y');
        cout << "The program is over!" << endl;

  return 0;
}
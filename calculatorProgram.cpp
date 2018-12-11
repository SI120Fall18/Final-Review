#include <iostream>
using namespace std;

void getTwoNumbers(int &, int &);

int main() {
  char operation;
  int num1, num2, answer;
  char cont;

  do {
    cout << "What operation do you want to perform (+, -, *, /)? ";
    cin >> operation;

    switch(operation) {
      case '+':
        getTwoNumbers(num1, num2);
        cout << "The answer is " << num1 + num2 << endl;
        break;
      case '-':
        getTwoNumbers(num1, num2);
        cout << "The answer is " << num1 - num2 << endl;
        break;
      case '*':
        getTwoNumbers(num1, num2);
        cout << "The answer is " << num1 * num2 << endl;
        break;
      case '/':
        getTwoNumbers(num1, num2);
        cout << "The answer is " << static_cast<double>(num1)/num2 << endl;
        break;
    }

    cout << "Would you like to continue? ";
    cin >> cont;
  } while(cont != 'N');

  return 0;
}

void getTwoNumbers(int &num1, int &num2) {
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
}

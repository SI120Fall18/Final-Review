#include <iostream>
using namespace std;

void getFirstName(string &);
void getLastName(string &);

int main() {
  char choice;
  string first_name, last_name, email;
  int age;

  cout << "What you like to create an account (Y/N)? ";
  cin >> choice;

  if(choice == 'Y') {
    cin.ignore();
    cout << "What is your first name? ";
    getFirstName(first_name);
    cout << "What is your last name? ";
    getLastName(last_name);
    cout << "What is your email address? ";
    getline(cin, email);
    cout << "What is your age? ";
    cin >> age;
    cout << "Thanks for creating an account!" << endl;
  } else { 
    cout << "Thank you come again." << endl;
  }

  return 0;
}

void getFirstName(string &name) {
  bool contains_digit;
  do {
    contains_digit = false;
    getline(cin, name);
    for(int i = 0; i < name.length(); i++) {
      if(isdigit(name.at(i))) {
        contains_digit = true;
      }
    }
    if(contains_digit) {
      cout << "That is not a valid first name. What is your first name? "; 
    }
  } while(contains_digit); // This means while(contains_digit == true)
}

void getLastName(string &name) {
  bool contains_digit;
  do {
    contains_digit = false;
    getline(cin, name);
    for(int i = 0; i < name.length(); i++) {
      if(isdigit(name.at(i))) {
        contains_digit = true;
      }
    }
    if(contains_digit) {
      cout << "That is not a valid last name. What is your last name? "; 
    }
  } while(contains_digit); // This means while(contains_digit == true)
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const int CLASS_SIZE = 10;
  string students[CLASS_SIZE] = { "Floyd", "Rolando", "Freddie", "Carmen", "Denise",
                          "Van", "Myra", "Jacquelyn", "Kathy", "Harvey" };
  char attendance[CLASS_SIZE];

  for(int i = 0; i < CLASS_SIZE; i++) {
    cout << students[i] << "? ";
    cin >> attendance[i];
  }

  cout << "Name \t Attendance" << endl;
  cout << "- - - - - - - - - - " << endl;
  for(int i = 0; i < CLASS_SIZE; i++) {
    cout << left << setw(12) << students[i] << " " << attendance[i] << endl;
  }

  return 0;
}

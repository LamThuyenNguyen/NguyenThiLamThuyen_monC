//program 10.1
#include <iostream>
#include <cctype>
using namespace std;
int main(){
  //khai bao bien ky tu input
  char input;
  cout << "Enter any character: ";
  //nhap vao bien input
  cin.get(input);
  cout << "The character you entered is: " << input << endl;
  //khoi tao cau dieu kien if, neu tim thay isalpha cua bien input thi xuat ra man hinh
  if (isalpha(input))
  cout << "That's an alphabetic character.\n";
  //khoi tao cau dieu kien if, neu tim thay isdigit cua bien input thi xuat ra man hinh
  if (isdigit(input))
  cout << "That's a numeric digit.\n";
  //khoi tao cau dieu kien if, neu tim thay islower cua bien input thi xuat ra man hinh
  if (islower(input))
  cout << "The letter you entered is lowercase.\n";
  //khoi tao cau dieu kien if, neu tim thay isupper cua bien input thi xuat ra man hinh
  if (isupper(input))
  cout << "The letter you entered is uppercase.\n";
  //khoi tao cau dieu kien if, neu tim thay isspace cua bien input thi xuat ra man hinh
  if (isspace(input))
  cout << "That's a whitespace character.\n";
  return 0;
}
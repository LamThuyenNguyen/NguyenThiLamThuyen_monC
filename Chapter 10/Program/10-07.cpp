//program 10.7
#include <iostream>
#include <cstring>
using namespace std;
int main(){
  //khai abo hang nguyen
  const int LENGTH = 40;
  //khai abo amng ky tu
  char firstString[LENGTH], secondString[LENGTH];
  cout << "Enter a string: ";
  //nhap vao mang firstString
  cin.getline(firstString, LENGTH);
  cout << "Enter another string: ";
  //nhap vao mang secondStrings
  cin.getline(secondString, LENGTH);
  // khoi tao cau dieu kien if
  //neu dieu kien thoa man thi xuat ra man hinh
  if (strcmp(firstString, secondString) == 0)
    cout << "You entered the same string twice.\n";
  //neu khong thoa man thi xuat ra man hinh
  else
    cout << "The strings are not the same.\n";
  return 0;
}
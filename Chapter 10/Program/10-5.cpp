//program 10.5
#include <iostream>
#include <cctype>
using namespace std;
int main(){
  //khai bao hang nguyen
  const int SIZE = 80;
  //khai bao mang ky tu line
  char line[SIZE];
  //tao bien dem
  int count = 0;
  cout << "Enter a sentence of no more than "
       << (SIZE - 1) << " characters:\n";
  //nhap vao mang line
  cin.getline(line, SIZE);
  cout << "The sentence you entered is:\n";
  //khoi tao vong lap while
  while (line[count] != '\0')
  {
    //voi moi gia tri cua mang duoc xuat ra, tang bien dem len mot don vi
    cout << line[count];
    count++;
  }
  return 0;
}
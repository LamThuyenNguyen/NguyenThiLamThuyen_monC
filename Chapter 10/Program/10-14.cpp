//program 10.14
#include <iostream>
using namespace std;
int countChars(char *, char);
int main(){
  //khai bao hang nguyen
  const int SIZE = 51;
  //khai bao mang ky tu customeruserSTring
  char userString[SIZE]; 
  //khai bao bien ky tu letter
  char letter;
  cout << "Enter a string (up to 50 characters): ";
  //nhap vao userString
  cin.getline(userString, SIZE);
  cout << "Enter a character and I will tell you how many\n";
  cout << "times it appears in the string: ";
  //nhap va xuat bien letter
  cin >> letter;
  cout << letter << " appears ";
  //goi va xuat ra ham countChars duoc truyen vao mang userSTring va bien letter
  cout << countChars(userString, letter) << " times.\n";
  return 0;
}
//khai bao ham countChars gom con tro kieu char va bien ky tu ch 
int countChars( char *strPrt, char ch)
{
  //tao bien chua so lan xuat hien
  int times = 0;
  //khoi tao vong lap while, thuc hien vong lap khi *strPtr khac \0
  while (*strPtr != '\0')
  {
    //neu *strPtr bang ch, tang bien times 
    if (*strPtr == ch)
       times++;
    strPtr++;
  }
  //tra ve times
  return times;
}

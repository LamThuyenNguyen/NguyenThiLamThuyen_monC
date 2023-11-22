//program 10.12
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main(){
 //khai bao hang nguyen
 const int LENGTH = 30;
 //khai bang mang ky tu first, second
 char first[LENGTH];
 char second[LENGTH];
 //xuat huong dan nhap cac phan tu trong length
 cout << "Enter a string with no more than "
      << (LENGTH - 1) << " characters:\n";
 //nhap vao mang first
 cin.getline(first, LENGTH);
 //goi ham stringCopy truyen vao do ham first, second
 stringCopy(first, second);
 //xuat ra man hinh mang second
 cout << "The string you entered is:\n" << second << endl;
 return 0;
}
//khai bao ham stringCopy gon hai mang ky tu string1 va string2
void stringCopy( char string1[], char string2[])
{ 
  //tao bien dem
  int index = 0;
  //khoi tao vong lap while thuc hien khi phan tu trong mang string1 khac ky tu '\0'
  while (string1[index] != '\0')
  {
     //sao chep phan tu o mang string1 vso mang string2
     string2[index] = string1[index];
     //tang bien dem
     index++;
  } 
  string2[index] = '\0';
}
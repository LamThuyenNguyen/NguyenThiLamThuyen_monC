//program 10.13
#include <iostream>
#include <cctype>
using namespace std;
//khai bao ham nameSlice
void nameSlice(char []);
int main(){
 //khai bao hang nguyen
 const int SIZE = 41;
 //khai bao mang ky tu name
 char name[SIZE];
 cout << "Enter your first and last names, separated ";
 cout << "by a space:\n";
 //nhap vao name
 cin.getline(name, SIZE);
 //goi ham nameslice truyen vao do mang name
 nameSlice(name);
 cout << "Your first name is: " << name << endl;
 return 0;
}
//khai bao ham nameSlice gom mang ky tu userName
void nameSlice(char userName[])
{
  //tao bien dem
  int count = 0;
  //khoi tao vong lap while, khi gia tri cua phan tu count trong mang userName khac ky tu ' ' va '\0 thi thuc hien vong lap
  while (userName[count] != ' ' && userName[count] != '\0')
    //tang bien dem
    count++; 
  //khoi tao cau dieu kien if, khi gia tri cua phan tu count trong mang userName la ky tu ' ' thi thuc hien lenh
  if (userName[count] == ' ')
      //gan gait ri cho userName[count]
      userName[count] = '\0';
}
//program 10.9
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main(){
 //khai bao hang nguyen
 const int NAME_LENGTH = 30;
 //khai bao mang ky tu name1. name2
 char name1[NAME_LENGTH], name2[NAME_LENGTH];
 cout << "Enter a name (last name first): ";
 //nhap vao mang ky tu name1
 cin.getline(name1, NAME_LENGTH);
 cout << "Enter another name: ";
 //nhap vao mang ky tu name2
 cin.getline(name2, NAME_LENGTH);
 cout << "Here are the names sorted alphabetically:\n";
 //neu dieu kien thoa man thi thuc hien cau lenh ke tiep
 if (strcmp(name1, name2) < 0)
  cout << name1 << endl << name2 << endl;
 //neu dieu kien thoa man thi thuc hien cau lenh ke tiep
 else if (strcmp(name1, name2) > 0)
  cout << name2 << endl << name1 << endl;
 //neu khong dieu kien nao thoa man thi thuc hien cau lenh ke tiep
 else
  cout << "You entered the same name twice!\n"; 
 return 0;
}
//program 5.25
#include <iostream>
#include <cmath>
using namespace std;
int main(){
 //khai bao bien thuc
 double value;
 //khai bao bien nguyen
 char choice;
 cout << "Enter a number: ";
 //nhap vao gia tri bien value
 cin >> value;
 cout << "This program will raise " << value;
 cout << " to the powers of 0 through 10.\n";
 //khoi tao vong lap for de tinh toan gia tri cac bien
 for (int count = 0; count <= 10; count++)
 {
   //xuat ra man hinh gia tri 
   cout << value << " raised to the power of ";
   cout << count << " is " << pow(value, count);
   cout << "\nEnter Q to quit or any other key ";
   cout << "to continue. ";
   cin >> choice;//nhap vao gia tri bien choice
   //neu bieu thuc trong ngoac (..) la dung thi dung chuong trinh
   if (choice == 'Q' || choice == 'q')
       break;
 }
 return 0;
}
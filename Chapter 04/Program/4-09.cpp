//program 4.9
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 double num1, num2, quotient;//khai bao bien thuc num1, num2, quotient
 cout << "Enter a number: ";
 cin >> num1;//nhap vao gia tri num1
 cout << "Enter another number: ";
 cin >> num2;//nhap vao gia tri num2
 if (num2 == 0){//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac, neu khong dung thi bo qua cau lenh
  cout << "Division by zero is not possible.\n";
  cout << "Please run the program again and enter\n";
  cout << "a number other than zero.\n";
 }
 else{//neu bieu thuc trong ngoac hong dung thi thuc hien caccau lenh
  quotient = num1 / num2;//gan gia tri cho bien quotient bang bieu thuc
  //xuat ra man hinh ket qua
  cout << "The quotient of " << num1 << " divided by ";
  cout << num2 << " is " << quotient << ".\n";
 }
 return 0;
}
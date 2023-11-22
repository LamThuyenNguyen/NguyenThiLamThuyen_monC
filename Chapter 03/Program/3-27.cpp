//program 3.27
#include <iostream>
using namespace std;
int main(){
 double num1, num2, num3, avg;//khai bao bien thuc num1, num2, num3
 cout << "Enter the first number: ";
 cin >> num1;//nhap vao gia tri bien num1
 cout << "Enter the second number: ";
 cin >> num2;//nhap vao gia tri bien num2
 cout << "Enter the third number: ";
 cin >> num3;//nhap vao gia tri bien num3
 avg = num1 + num2 + num3 / 3;//gan gia tri cho bien avg bang bieu thuc
  cout << "The average is " << avg << endl;//xuat ra man hinh gia tri
 return 0;
}
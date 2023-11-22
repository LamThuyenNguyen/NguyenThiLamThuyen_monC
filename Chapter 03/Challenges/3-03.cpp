//programming challenges 3
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  double test1,//khai bao bien thuc chua so diem tung lan kiem tra
         test2,
         test3,
         test4,
         test5;
  double avr;//khai bao bien thuc chua diem trung binh
  cout << "Enter the srcores of the 5 tests in the order: " << endl;
  cin >> test1 >> test2 >> test3 >> test4 >> test5;//nhap vao gia tri tung bien
  avr = (test1 + test2 + test3 + test4 + test5)/5;//gm gia tri cho bien avr bang bieu thuc
  cout << "the average test core: " << setprecision(1) << fixed << avr;//xuat ra man hinh gia tri bien avr, mac dinh mot so thap phan sau dau phap
  return 0; 
}
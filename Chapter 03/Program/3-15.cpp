//program 3.15
 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main(){
  double quotient, number1 = 132.364, number2 = 26.91;//khai bao va gan gia tri cho cac bien quotient, number1, number2
  quotient = number1 / number2;//gan gia tri cho bien quotient bang cong thuc
  cout << quotient << endl;//xuat ra man hinh gia tri bien quotien
  cout << setprecision(5) << quotient << endl;//xuat ra man hinh gia tri bien quotient mac dinh 4 so thap phan sau dau phay
  cout << setprecision(4) << quotient << endl;//xuat ra man hinh gia tri bien quotient mav dinh 3 so thap phan sau dau phay
  cout << setprecision(3) << quotient << endl;//xuat ra man hinh gia tri bien quotient mac dinh 2 so thap phan sau dau phay
  cout << setprecision(2) << quotient << endl;//xuat ra man hinh gia tri bien quotient mac dinh 2 so thap phan sau dau phay
  cout << setprecision(1) << quotient << endl;//xuat ra man hinh gia tri bien quotient lam tron den chu so nguyen
  return 0;
}
//program 3.24
 #include <iostream>
 #include <iomanip>
 #include <cmath>
 using namespace std;
 int main(){
  double a, b, c; 
  cout << "Enter the length of side a: ";
  cin >> a;//nhap vao gia tri bien a
  cout << "Enter the length of side b: ";
  cin >> b;//nhap vovaoa gia tri bien b
  c = sqrt(pow(a, 2.0) + pow(b, 2.0));//gan gia tri bine c bang bieu thuc 
  cout << "The length of the hypotenuse is ";
  cout << setprecision(2) << c << endl;//xuat ra gia tri c mac dinh 1 so thap phan sau dau phay
 return 0;
}
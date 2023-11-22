//program 3.4
 #include <iostream>
 using namespace std;
 int main(){
  double numerator, denominator;//khai bao bien thuc numerator va bien thuc denominator
  //xuat ra man hinh cau dan
  cout << "This program shows the decimal value of ";
  cout << "a fraction.\n";
  cout << "Enter the numerator: ";
  cin >> numerator;//nhap vao gia tri bien numerator
  cout << "Enter the denominator: ";
  cin >> denominator;//nhap vao gia tri bien denominator
  cout << "The decimal value is ";
  cout << (numerator / denominator) << endl;//xuat ra man hinh gia tri bieu thuc (numerator / denominator) 
  return 0;
}
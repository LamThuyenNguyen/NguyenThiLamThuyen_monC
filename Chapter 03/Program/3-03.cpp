//program 3.3
 #include <iostream>
 using namespace std;
 int main(){
  int whole;//khai bao bien nguyen whole
  double fractional;//khai bao bien thuc fractional
  char letter;//khai bao bien ky tu letter
  cout << "Enter an integer, a double, and a character: ";
  cin >> whole >> fractional >> letter;//nhap vao gia tri cac bien 
  cout << "Whole: " << whole << endl;//xuat ra man hinh gia tri cua bien whole
  cout << "Fractional: " << fractional << endl;//xuat ra man hinh gia tri cua bien fractional
  cout << "Letter: " << letter << endl;//xuat ra man hinh gia tri cua bien letter
  return 0;
}
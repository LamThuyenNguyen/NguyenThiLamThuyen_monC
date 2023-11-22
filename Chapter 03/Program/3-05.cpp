//program 3.5
 #include <iostream>
 #include <cmath>//thu vien de su dung ham pow()
 using namespace std;
 int main(){
  const double PI = 3.14159;//khai bao hang thuc PI
  double area, radius;//khai bao bien thuc area va radius
  //xuat ra man hinh cau dan
  cout << "This program calculates the area of a circle.\n";
  cout << "What is the radius of the circle? ";
  cin >> radius;//nhap vao gia tri bien radius
  area = PI * pow(radius, 2.0);//gan gia tri bang cong thuc cho bien area 
  cout << "The area is " << area << endl;//xuat ra man hinh gia tri bien area
  return 0;
}
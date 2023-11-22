//program 3.1
 #include <iostream>
 using namespace std;
 int main(){
  int length, width, area;//khai bao bien nguyen length, width, area
  //xuat ra man hinh cau dan
  cout << "This program calculates the area of a ";
  cout << "rectangle.\n";
  cout << "What is the length of the rectangle? ";
  cin >> length;//nhap vao gia tri bien length
  cout << "What is the width of the rectangle? ";
  cin >> width;//nhap vao gia tri bien width
  area = length * width;//gan gia tri cho bien area
  cout << "The area of the rectangle is " << area << ".\n";//xuat ra man hinh gia tri
  return 0;
}
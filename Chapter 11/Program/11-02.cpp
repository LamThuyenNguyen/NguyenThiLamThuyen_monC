//program 11.2
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//khai bao hang thuc
const double PI = 3.14159;
//khai bao struct Circle 
struct Circle
{
  double radius;
  double diameter; 
  double area;
};
int main()
{
  //tao cau truc Circle co ten c
  Circle c;
  cout << "Enter the diameter.";
  //nhap vao gia tri thanh vien diameter
  cin >> c.diameter;
  //gan gia tri cho thanh vien radidus va area trong c
  c.radius = c.diameter / 2;
  c.area = PI * pow(c.radius, 2.0);
  //formating, xuat ra man hinh
  cout << fixed << showpoint << setprecision(2);
  cout << "The radius and area of the circle are:\n";
  cout << "Radius: " << c.radius << endl;
  cout << "Area: " << c.area << endl;
  return 0;
}
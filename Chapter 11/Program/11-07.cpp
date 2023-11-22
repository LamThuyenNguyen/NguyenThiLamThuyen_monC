//program 11.7
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//khai bao hang thuc 
const double PI = 3.14159
//khai bao struct CIrcle
struct Circle
{
  double radius;
  double diameter; 
  double area;
};
//tao cau truc Circle co ten getInfo
Circle getInfo;

int main()
{
  //tao cau truc Circle co ten c
  Circle c;
  //goi ham va gan gia tri ham vao c
  c = getInfo();
  //gan gai tri cho thanh vien area cua c
  c.area = PI * pow(c.radius, 2.0);
  // Display the circle data.
  cout << "The radius and area of the circle are:\n";
  //foramting
  cout << fixed << setprecision(2);
  //xuat ra man hinh gia tri cua cac thanh vien
  cout << "Radius: " << c.radius << endl;
  cout << "Area: " << c.area << endl;
  return 0;
}

//tao cau truc Circle co ten getInfo
Circle getInfo()
{
  //tao mot cau truc Circle tam thoi
  Circle tempCircle;
  cout << "Enter the diameter of a circle: ";
  //nhap vao gia tri thanh vien diameter cua tempCircle
  cin >> tempCircle.diameter;
  //gan gai tri cho thanh vien  radius cua tempCircle
  tempCircle.radius = tempCircle.diameter / 2.0;
  //tra ve gia tri tempCIrcle
  return tempCircle;
}
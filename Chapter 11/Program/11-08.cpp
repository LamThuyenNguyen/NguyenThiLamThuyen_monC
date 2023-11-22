//program 11.8
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//khai bao struct Student
struct Student
{
  string name;
  int idNum;
  int creditHours;
  double gpa;
};
//khai bao ham getData
void getData(Studnet *);
int main()
{
  //tao cau truc co ten freshman
  Student freshman;
  cout << "Enter the following student data:\n";
  //goi ham getData truyen vao do freshman
  getData(&freshman);
  cout << "\nHere is the student data you entered:\n";
  //formating, xuat ra gia tri cac thanh vien cua freshman
  cout << setprecision(3);
  cout << "Name: " << freshman.name << endl;
  cout << "ID Number: " << freshman.idNum << endl;
  cout << "Credit Hours: " << freshman.creditHours << endl;
  cout << "GPA: " << freshman.gpa << endl;
  return 0;
}
//khai bao ham getItem gom cau truc InventoryItem 
void getData(Studnet *s)
{
  //nhap vao gia tri name 
  cout << "Student name: ";
  getline(cin, s->name);
  cout << "Student ID Number: ";
  //nhap vao gia tri idNum
  cin >> s->idNum;
  //nhap vao gia tri creditHours
  cout << "Credit Hours Enrolled: ";
  cin >> s->creditHours;
  //nhap vao gia tri gpa
  cout << "Current GPA: ";
  cin >> s->gpa;
}



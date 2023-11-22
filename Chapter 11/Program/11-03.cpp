//program 11.3
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//khai bao hang thuc
const double PI = 3.14159;
//khai bao struct Employee Pay
struct EmployeePay
{
  string name;
  int empNum;
  double payRate;
  double hours;
  double grossPay;
};
int main()
{
  //tao cau truc EmployeePay ten employee1, employee2
  EmployeePay employee1 = {"Betty Ross", 141, 18.75};
  EmployeePay employee1 = {"Jill Sandburg", 142, 17.50};
  //formating
  cout << fixed << showpoint << setprecision(2);
  //xuat ra thanh vien name cua employ1
  cout << "Name: " << employee1.name << endl;
  //xuat ra thanh vien empNum cua employee1
  cout << "Employee Number: " << employee1.empNum << endl;
  cout << "Enter the hours worked by this employee: ";
  //nhap vao thanh vien hours cua employee1
  cin >> employee1.hours;
  //gan gia tri cho thanh vien grossPay cua employee1 bang bieu thuc
  employee1.grossPay = employee1.hours * employee1.payRate;
  //xuat ra thanh vien grossPay cua employee1
  cout << "Gross Pay: " << employee1.grossPay << endl << endl;
  //xuat ra thanh vien name cua employee2
  cout << "Name: " << employee2.name << endl;
  //xuat ra thanh vien empNum cua employ2
  cout << "Employee Number: " << employee2.empNum << endl;
  cout << "Enter the hours worked by this employee: ";
  //nhap vao thanh vien hours cua employee2
  cin >> employee2.hours;
 //gan gia tri cho thanh vien grossPay cua employee2 bang bieu thuc
  employee2.grossPay = employee2.hours * employee2.payRate;
  //xuat ra thanh vien empNum cua employ2
  cout << "Gross Pay: " << employee2.grossPay << endl;
  return 0;
}
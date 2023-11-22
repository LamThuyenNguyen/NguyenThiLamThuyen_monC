//program 11.1
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//khai bao struct PayRoll 
struct PayRoll
{
  int empNumber;
  string name;
  double hours;
  double payRate;
  double grossPay; 
};
int main(){
  //tao cau truc PayRoll va luu vao employee
  PayRoll employee;
  cout << "Enter the employee's number";
  //nhap vao gia tri cua thanh vien empNumber cua employee
  cin >> employee.empNumber;
  cout << "Enter the employee's name: ";
  //xoa ky tu '\n' bi du
  cin.ignore();
  //nhap vao gai tri cua thanh vien name cua employee
  getline(cin, employee.name);
  cout << "How many hours did the employee work? ";
  //nhap vao gia tri cua thanh vien hours cua employee
  cin >> employee.hours;
  // Get the employee's hourly pay rate.
  cout << "What is the employee's hourly payRate? ";
  //nhap vao gia tri cua thanh vien payRate cua employee
  cin >> employee.payRate;
  //gan gia tri thanh vien grossPay trong employee bang bieu thuc
  employee.grossPay = employee.hours * employee.payRate;
  //xuat ra man hinh ket qua
  cout << "Here is the employee's payroll data:\n";
  cout << "Name: " << employee.name << endl;
  cout << "Number: " << employee.empNumber << endl;
  cout << "Hours worked: " << employee.hours << endl;
  cout << "Hourly payRate: " << employee.payRate << endl;
  cout << fixed << showpoint << setprecision(2);//formating
  cout << "Gross Pay: $" << employee.grossPay << endl;
return 0;
}
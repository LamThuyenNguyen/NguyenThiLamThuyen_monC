//program 11.5
#include <iostream>
#include <string>
using namespace std;

//khai bao struct Date
struct Date
{
  int month;
  int day;
  int year;
};
//khai bao struct Date
struct Place
{
  double address;
  double city; 
  double state;
  double zip;
};
//khai bao struct Place
struct EmployeeInfo
{
  string name;
  int employeeNumber;
      //tao cau truc Date co ten birthDate
      Date birthDate;
      //tao cau truc Place co ten residence
      Place residence;
};
int main()
{
  //tao cau truc EmpoyeeInfo co ten manager
  EmployeeInfo manager;
  cout << "Enter the manager's name: ";
  //nhap vao gia tri cua cac thanh vien cua manager
  getline(cin, manager.name);
  cout << "Enter the manager's employee number: ";
  cin >> manager.employeeNumber;
  cout << "Now enter the manager's date of birth.\n";
  cout << "Month (up to 2 digits): ";
  cin >> manager.birthDate.month;
  cout << "Day (up to 2 digits): ";
  cin >> manager.birthDate.day;
  cout << "Year: ";
  cin >> manager.birthDate.year;
  //bo qua ky tu '\n bi du
  cin.ignore();
  //nhap vao gia tri cau cac thanh vien manager
  cout << "Enter the manager's street address: ";
  getline(cin, manager.residence.address);
  cout << "City: ";
  getline(cin, manager.residence.city);
  cout << "State: ";
  getline(cin, manager.residence.state);
  cout << "ZIP Code: ";
  getline(cin, manager.residence.zip);
  //xuat ra man hinh gia tri cua cac thanh vien
  cout << "\nHere is the manager's information:\n";
  cout << manager.name << endl;
  cout << "Employee number " << manager.employeeNumber << endl;
  cout << "Date of birth: ";
  cout << manager.birthDate.month << "-";
  cout << manager.birthDate.day << "-";
  cout << manager.birthDate.year << endl;
  cout << "Place of residence:\n";
  cout << manager.residence.address << endl;
  cout << manager.residence.city << ", ";
  cout << manager.residence.state << " ";
  cout << manager.residence.zip << endl;
  return 0;
}
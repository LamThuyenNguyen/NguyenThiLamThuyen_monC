//program 11.9
#include <iostream>
#include <iomanip>
using namespace std;

//khai bao union PaySource
union PaySource
{
  int hours;
  float sales;
}
int main()
{
  //tao PaySource co ten employee1
  PaySource employee1;
  //khai bao bien ky tu
  char payType;
  //khai bao bien thuc
  float payRate;
  float grossPay;
  //formating
  cout << fixed << showpoint << setprecision(2);
  cout << "This program calculates either hourly wages or\n";
  cout << "sales commission.\n";
  cout << "Enter H for hourly wages or C for commission: ";
  //nhao vao gai tri bien payType
  cin >> payType;
  //khoi tao cau dieu kien if else if
  //neu dieu kien o if thoa man thi thuc hien cac cau lenh tiep theo
  if (payType == 'H' || payType == 'h')
  {
     cout << "What is the hourly pay rate? ";
     //nhap vao bien payRate
     cin >> payRate;
     cout << "How many hours were worked? ";
     //nhap vao gia tri thanh vien hours cua employee
     cin >> employee1.hours;
     grossPay = employee1.hours * payRate;
     cout << "Gross pay: $" << grossPay << endl;
  }
  //neu dieu kien o else if thoa amn thi thuc hien cac cau lenh tiep thao
  else if (payType == 'C' || payType == 'c')
  {
     cout << "What are the total sales for this employee? ";
     //nhap vao gia tri thanh vien sales cua employee1
     cin >> employee1.sales;
     //gan gai tri cho thanh vien grossPay
     grossPay = employee1.sales * 0.10;
     cout << "Gross pay: $" << grossPay << endl;
  }
  //neu dieu kien o if va else if khogn thoa man thi thuc hien cau lenh tiep theo
  else
  {
     cout << payType << " is not a valid selection.\n";
  }
  return 0;
}


//program 11.10
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //union khong ten
  union
  {
     int hours;
     float sales;
  }
  //khai bao bien ky tu ]
  char payType;
  float payRate;
  //khai bao bien thuc
  float grossPay;
  //formating
  cout << fixed << showpoint << setprecision(2);
  cout << "This program calculates either hourly wages or\n";
  cout << "sales commission.\n";
  cout << "Enter H for hourly wages or C for commission: ";
  //nhap vao gia tri payType
  cin >> payType;
  //khoi tao cau dieu kien if else if
  //neu dieu kien o if thoa man thi thuc hein cua lenh tiep theo
  if (payType == 'H' || payType == 'h')
  {
   cout << "What is the hourly pay rate? ";
   cin >> payRate;
   cout << "How many hours were worked? ";
   //nhap vao thanh vien cua union
   cin >> hours; 
   //gan gai tri cho grossPay
   grossPay = hours * payRate;
   cout << "Gross pay: $" << grossPay << endl;
  }
  //neu dieu kien o else if thoa man thi thuc heinc ac cua lenh
  else if (payType == 'C' || payType == 'c')
  {
    cout << "What are the total sales for this employee? ";
    //nhap vao thanh vien sales cua union
    cin >> sales;
    //gan gia tri cho grossPay
    grossPay = sales * 0.10;
    cout << "Gross pay: $" << grossPay << endl;
  }
  //neu khong thoa amn dieu kien o if va else if thi thuc hien cau lenh tiep theo
  else
  {
    //xuat ra man hinh gia tri
    cout << payType << " is not a valid selection.\n";
  }
  return 0;
}
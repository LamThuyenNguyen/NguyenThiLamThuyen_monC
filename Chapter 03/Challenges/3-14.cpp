//programming challenges 14
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  //khia bao hang thuc
  const float STATE_SALES_TAX  = 0.04,
              COUNTY_SALES_TAX = 0.02,
              SALES_TAX        = 0.06;
 //khai bao bien thuc
  float S,
        T,
        total_state_tax,
        total_county_tax,
        total_sales_tax;
  //khai bao bien xau ky tu
  string month;
  //khai bao bien nguyen
  int year;
  cout << "Enter the month to receive the report for: ";
  cin >> month;//nhap vao gia tri bien month
  cout << "Enter the year: ";
  cin >> year;//nhap vao gia tri bien year
  cout << "Total amount collected for the month of " << month << ": ";//xuat ra man hinh cau dan
  cin >> T;//nhap vao gia tri bien T
  //gan gia tri cho bien S, total_state_tax, total_county_tax va total_sales_tax bang bieu thuc 
  S = T / 1.06;
  total_state_tax = S * STATE_SALES_TAX;
  total_county_tax = S * COUNTY_SALES_TAX;
  total_sales_tax = S * SALES_TAX;
  cout << setprecision(2) << fixed << right << endl;//formating
  //xuat ra man hinh gia tri cac bien
  cout << "Month: " << month << endl;
  cout << "Total Collected:      $" << setw(10) << T << endl;
  cout << "Sales:                $" << setw(10) << S << endl;
  cout << "County Sales Tax:     $" << setw(10) << total_county_tax << endl;
  cout << "State Sales Tax:      $" << setw(10) << total_state_tax << endl;
  cout << "Total Tales Tax:      $" << setw(10) << total_sales_tax << endl;
  cout << endl;
  return 0; 
}
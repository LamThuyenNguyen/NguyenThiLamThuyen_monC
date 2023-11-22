//programming challenges 11
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  const int TWELVE_MONTHS = 12;//khai bao hang 
  float loanPayment,//khai bao bien
        insurance,
        gas,
        oil,
        tires,
        maintenance,
        total,
        cost;
  cout << "Enter the flowing monthly costs for your";
  cout << "Loan Payment    :$";
  cin >> loanPayment;//nhap vao gia tri bien loanPayment
  cout << "Insurance       :$";
  cin >>insurance;//nhap vao gai tri bien insurance
  cout << "Gas             :$";
  cin >> gas;//nhap vao gai tri bien gas
  cout << "Oil             :$";
  cin >> oil;//nhap vao gai tri bien oil
  cout << "Tires           :$";
  cin >> tires;//nhap vao gia tri bien tires
  cout << "Mainternance    :$";
  cin >> maintenance;//nhap vao gai tri bien maintenance
  cout << endl;
  total = loanPayment + insurance + gas + oil + tires + maintenance;//gan gia tri cho bien total bang bieu thuc
  cost = total * TWELVE_MONTHS;//gan gai tri cho bien cost bang bieu thuc 
  cout << "Monthly car expenses :$" << total << endl;//xuat ra man hinh gia tri bien total
  cout << "Total annual cost :$" << cost;//xuat ra man hinh gia tri bien cost
  return 0; 
}
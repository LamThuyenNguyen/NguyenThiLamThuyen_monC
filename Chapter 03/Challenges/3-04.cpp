//programming challenges 4
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  //khai bao bien chua ten cua cac thang can tinh trung binh luong mua
  string month1,
         month2,
         month3;
  //khai bao bien chua luong mua cac thang, tong luong mua, luong mua trung binh
  float rainfallMonth1,
        rainfallMonth2,
        rainfallMonth3,
        total,
        avr;
  cout << "Enter the name for month 1: ";
  cin >> month1;//nhap vao ten thang thu 1
  cout << "How many inches of rain fell for " << month1 << ": ";
  cin >> rainfallMonth1;//nhap vao luong mua cua thang thu nhat
  cout << "Enter the name for month 2: ";
  cin >> month2;//nhap vao ten cua thang thu 2
  cout << "How many inches of rain fell for " << month2 << ": ";
  cin >> rainfallMonth2;//nhap vao luong mua cua thang thu 2
  cout << "Enter the name for month 3: ";
  cin >> month3;//nhap vao ten cua thang thu 3
  cout << "How many inches of rain fell for " << month3 << ": ";
  cin >> rainfallMonth3;//nhap vao luong mua cua thang thu 3
  total = rainfallMonth1 + rainfallMonth2 + rainfallMonth3;//gan gia tri cho bien total bang bieu thuc 
  avr = total/3;//gan gia tri bien avr bang bieu thuc
  cout << setprecision(2) << fixed;//mac dinh hai so thap phan sau dau phay
  //xuat ra man hinh
  cout << "\nThe average rainfall for ";
  cout << month1 << ", ";
  cout << month2 << ", and ";
  cout << month3 << ": " << avr << " inches." << endl;//xuat ra man hinh gai tri cua bien avr
  return 0; 
}
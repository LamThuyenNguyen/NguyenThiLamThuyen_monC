//programming challenges 5
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int male,//khai abo bien chua so luong nam va nu
      female,
      total;//khai bao bien chua so luong tong hoc sinh trong lop
  cout << "The number of males registered  in a class: ";
  cin >> male;//nhap vao so hoc sinh nam
  cout << "The number of females registered in a class: ";
  cin >> female;//nhap vao so hoc sinh nu
  total = male + female;//gan gia tri bien total bang biru thuc
  cout << "The percentage of males in class: " << 1.0*male/total << endl;//xuat ra ti le nam sinh trong lop
  cout << "The percentage of females in class: " << 1.0*male/total;//xuat ra ty le nu sinh trong lop
  return 0; 
}
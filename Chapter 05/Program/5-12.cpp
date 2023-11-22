//program 5.12
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 //khai bao bien nguyen
 int days;
 //khai bao bien thuc
 double total = 0.0; 
 cout << "For how many days do you have sales figures? ";
 cin >> days;//nhap vao gia tri bien days
 //khoi tao vong lap for duyet tung gia tri cua bien count , ket thuc bong lap tang gia tri bien count 1 don vi, cho den khi count lon hon days
 for (int count = 1; count <= days; count++)
 {
  double sales;//khai bao bien thuc sales
  cout << "Enter the sales for day " << count << ": ";
  cin >> sales;//nhap vao gia tri bien sales
  total += sales;//cong don vao bien total
 }
 cout << fixed << showpoint << setprecision(2);//formating
 cout << "The total sales are $" << total << endl;//xuat ra amn hinh gia tri bien total
 return 0;
}
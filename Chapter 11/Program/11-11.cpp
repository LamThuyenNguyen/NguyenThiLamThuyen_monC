//program 11.11
#include <iostream>
#include <iomanip>
using namespace std;

//khai bao enum Day gom cac trang thai
enum day { MONDAY, TUEDAY, WEDNESDAY, THURSDAY, FRIDAY };
int main()
{
  //khai bao hang nguyen
  const int NUM_DAYS = 5;
  //khai bao mang thuc
  double sales[NUM_DAYS];
  //khai bao bien thuc
  double total = 0.0;
  //tao bien dem
  int index;
  //khoi tao vang lap for de nhap cac phan tu cua sales
  for (index = MONDAY; index <= FRIDAY; index++)
  {
    cout << "Enter the sales for day "
         << index << ": ";
    //nhap vao gia tri cua phan tu index cua mang sales
    cin >> sales[index];
  }
  //khoi tao vong lap for tinh toan gia tri cua bien total
  for (index = MONDAY; index <= FRIDAY; index++)
     //cong don cac gai tri cua phan tu trong sales vao bien total
     total += sales[index];
  //formating, xuat ra man hinh ket qua
  cout << "The total sales are $" << setprecision(2)
       << fixed << total << endl;
  return 0;
}
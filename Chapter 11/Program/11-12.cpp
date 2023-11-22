//program 11.12
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
  Day workDay;
  //khoi tao vang lap for de nhap cac phan tu cua sales
  for (workDay = MONDAY; workDay <= FRIDAY;
                         workDay = static_cast<Day>(workDay + 1))
  {
    cout << "Enter the sales for day "
       << workDay << ": ";
    cin >> sales[workDay];
  }
  //khoi tao vong lap for tinh toan gia tri cua bien total
  for (workDay = MONDAY; workDay <= FRIDAY;
                         workDay = static_cast<Day>(workDay + 1))
      //cong don cac gai tri cua phan tu trong sales vao bien total
                   
      total += sales[workDay];
  //formating, xuat ra man hinh ket qua
  cout << "The total sales are $" << setprecision(2)
       << fixed << total << endl;
  return 0;
}
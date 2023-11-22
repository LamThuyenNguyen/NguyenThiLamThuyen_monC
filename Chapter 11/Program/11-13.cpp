//program 11.13
#include <iostream>
#include <iomanip>
using namespace std;

//khai bao enum Day gom cac trang thai
enum day { MONDAY, TUEDAY, WEDNESDAY, THURSDAY, FRIDAY };
void displayDayName(Day);
int main()
{
  //khai bao hang nguyen
  const int NUM_DAYS = 5;
  //khai bao mang thuc
  double sales[NUM_DAYS];
  //khai bao bien thuc
  double total = 0.0;
  Day workDay;
  //khoi tao vong lap for de nhap vao gia tri cau cac phan tu trong mang sales
  for (workDay = MONDAY; workDay <= FRIDAY;
                         workDay = static_cast<Day>(workDay + 1))
  {
      cout << "Enter the sales for day ";
      //goi ham displayDayName truyen vao do workDay
      displayDayName(workDay);
      cout << ": ";
      //nhap vao gia tri cua phan tu workDay trong mang sales
      cin >> sales[workDay];
  }
  //khoi tao vong lap de tinh toan gia tri cua bien total
  for (workDay = MONDAY; workDay <= FRIDAY;
                        workDay = static_cast<Day>(workDay + 1))
      //cong don gia tri cau phan tu workDay trong mang sales
      total += sales[workDay];
  //formating, xuat ra man hinh gia tri bien total
  cout << "The total sales are $" << setprecision(2)
                                  << fixed << total << endl;
  return 0;
}
//khai bao ham displayDayName
void displayDayName(Day d)
{
  //khoi tao switch case de chia truong hop cho d
  switch(d)
  {
    //bien d thuoc case nao thi thuoc thuc cau lenh xuat ra o truong hop do, dung lenh switch
    case MONDAY    : cout << "Monday";
                   break;
    case TUESDAY   : cout << "Tuesday";
                   break;
    case WEDNESDAY : cout << "Wednesday";
                   break;
    case THURSDAY  : cout << "Thursday";
                   break;
    case FRIDAY    : cout << "Friday";
  }

}
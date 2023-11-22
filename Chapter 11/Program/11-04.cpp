//program 11.4
#include <iostream>
#include <iomanip>
using namespace std;

//khai bao hang thuc
const double PI = 3.14159;
//khai bao struct PayInfo 
struct PayInfo
{
  int hours;
  double payRate;
};
int main()
{
  //khai bao hang nguyen
  const int NUM_WORKERS = 3;
  //mang cau truc
  PayInfo workers[NUM_WORKERS];
  //tao bien dem
  int index;
  cout << "Enter the hours worked by " << NUM_WORKERS
       << " employees and their hourly rates.\n";
  //khoi tao vong lap de nhap vao gia tri cua cac phan tu trong mang worker
  for (index = 0; index < NUM_WORKERS; index++)
  {
    cout << "Hours worked by employee #" << (index + 1);
    cout << ": ";
    //nhap vao gai tri cua phan tu mang worker thanh vien hour 
    cin >> workers[index].hours;
    cout << "Hourly pay rate for employee #";
    //xuat ra man hinh gia tri bien index + 1 don vi
    cout << (index + 1) << ": ";
    //nhap vao gia tri phan tu cua mang worker thanh vien payRate
    cin >> workers[index].payRate;
    cout << endl;
  }
  cout << "Here is the gross pay for each employee:\n";
  //formating
  cout << fixed << showpoint << setprecision(2);
  //khoi tao vong lap de tinh gia tri can tim
  for (index = 0; index < NUM_WORKERS; index++)
  {  
     //khai bao bien thuc gross
     double gross;
     //gan gia tri cho bien thuc gross
     gross = workers[index].hours * workers[index].payRate;
     //xuat ra man hinh
     cout << "Employee #" << (index + 1);
     cout << ": $" << gross << endl;
  }
  return 0;
}
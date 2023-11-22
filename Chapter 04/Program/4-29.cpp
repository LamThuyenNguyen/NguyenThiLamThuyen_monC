//program 4.29
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 const double MIN_INCOME = 35000.0;//khai bao hang thuc
 const int MIN_YEARS = 5;//khai bao hang nguyen
 cout << "What is your annual income? ";
 double income;//khai bao bien thuc
 cin >> income;//nhap vao gia tri bien thuc income
 if (income >= MIN_INCOME){//khoi tao cau dieu kien if, neu bieu thuc trong ngoac thoa man thi thuc hien cac cau lenh trong {..}
   cout << "How many years have you worked at "
        << "your current job? ";
   int years;//khai bao bien nguyen years
   cin >> years;//nhap vao gia tri bien years
   if (years > MIN_YEARS)//khoi tao cau dieu kien if, neu bieu thuc trong ngoac thoa man thi thuc hien cau lenh xuat ra man hinh
      cout << "You qualify.\n";
   else{//neu bieu thuc trong ngoac if{} khong thoa man thi thuc hien cau lenh xuat ra man hinh
      cout << "You must have been employed for\n"
           << "more than " << MIN_YEARS
           << " years to qualify.\n";
   }
 }
 else{//neu bieu thuc trong ngoac if() dong 11 khong thoa man thi xuat ra man hinh
   cout << "You must earn at least $" << MIN_INCOME
        << " to qualify.\n";
 }
 return 0;
}
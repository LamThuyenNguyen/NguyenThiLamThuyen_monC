//program 4.16
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 //khai bao hang
 const double MIN_INCOME = 35000.0;
 const int MIN_YEARS = 5;
 double income;//khai bao bien thuc
 int years; //khai bao bien nguyen
 cout << "What is your annual income? ";
 cin >> income;//nhap vao gia tri cua bien income
 cout << "How many years have you worked at "
      << "your current job? ";
 cin >> years;//nhap vao gia tri cua bien years
 if (!(income >= MIN_INCOME || years > MIN_YEARS)){//khoi tao cau dieu kien if voi dau phu dinh o dau bieu thuc, neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac {...}
   cout << "You must earn at least $"
        << MIN_INCOME << " or have been "
        << "employed more than " << MIN_YEARS
        << " years.\n";
 }
 else{//neu bieu thuc trong ngoac if(...) sai thi thuc hien cac cau lenh trong ngoac {..}
   cout << "You quality.\n";
 }
 return 0;
}
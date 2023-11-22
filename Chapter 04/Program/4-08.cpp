//program 4.8
#include <iostream>
#include <iomanip>
using namespace std;
 int main(){
 int number;//khia bao bien nguyen number
 cout << "Enter an integer and I will tell you if it\n";
 cout << "is odd or even. ";
 cin >> number;//nhap vao gai tri bien ngueyn number
 if (number % 2 == 0)//neu bieu thuc trong dung ( number nguyen) thi thuc hien cau lenh, neu khong dung thi bo qua cau lenh
  cout << number << " is even.\n";
 else//neu bieu thuc trong ngoac khong dung thi thuc hien cau lenh
  cout << number << " is odd.\n";
 return 0;
}
//program 4.10
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 char employed,//khai bao bien ky tu employed va recentGrad
      recentGrad;
 cout << "Answer the following questions\n";
 cout << "with either Y for Yes or ";
 cout << "N for No.\n";
 cout << "Are you employed? ";
 cin >> employed;//nhap vao gia tri bien employed
 cout << "Have you graduated from college ";
 cout << "in the past two years? ";
 cin >> recentGrad;//nhap vao gia tri bien recentGrad
 if (employed == 'Y' && recentGrad == 'Y'){//khoi tao cau dieu kien if, neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac {...}
   cout << "You qualify for the special "
        << "interest rate.\n";
 }
 else{//neu bieu thuc trong ngoac o dong 16 khong dung thi thuc hien cac cau lenh trong ngoac {...}
   cout << "You must be employed and have\n"
        << "graduated from college in the\n"
        << "past two years to qualify.\n";
 }
 return 0;
}
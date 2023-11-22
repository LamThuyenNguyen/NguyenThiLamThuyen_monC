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
 if (employed == 'Y'){//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac
   if (recentGrad == 'Y'){//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac, neu khogn dung thi bo qua cau lenh
   //xuat ra man hinh
     cout << "You qualify for the special ";
     cout << "interest rate.\n";
   }
   else{//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac
     cout << "college in the past two\n";
     cout << "years to qualify.\n";
   }
 }
 else{//neu bieu thuc trong ngoac if( employed == 'Y') dung thi thuc hien cau lenh 
  cout << "You must be employed to qualify.\n";
 }
 return 0;
}
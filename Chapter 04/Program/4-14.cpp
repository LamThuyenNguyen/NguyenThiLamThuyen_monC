//program 4.14
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 const int A_SCORE = 90,//khai bao hang nguyen 
           B_SCORE = 80,
           C_SCORE = 70,
           D_SCORE = 60;
 int testScore;//khai bao bien nguyen testScore
 cout << "Enter your numeric test score and I will\n";
 cout << "tell you the letter grade you earned: ";
 cin >> testScore;
 if (testScore >= A_SCORE){//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac kep {..}
   cout << "Your grade is A.\n";
 }
 else if (testScore >= B_SCORE){//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac kep {..}
  cout << "Your grade is B.\n";
 }
 else if (testScore >= C_SCORE){//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac kep {..}
  cout << "Your grade is C.\n";
  }
 else if (testScore >= D_SCORE){//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac kep {..}
  cout << "Your grade is D.\n";
  }
 else if (testScore >= 0){//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac kep {..}
  cout << "Your grade is F.\n";
 }
 else{//neu cac cau ldieu kien  tren khong dung thi thuc hien cac cau lenh trong ngoac {..}
  cout << "Invalid test score.\n";
 }
 return 0;
}
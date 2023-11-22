//program 4.19
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 const int A_SCORE = 90,//khai bao hang nguyen 
           B_SCORE = 80,
           C_SCORE = 70,
           D_SCORE = 60,
           MIN_SCORE = 0,
           MAX_SCORE = 100;
 int testScore;//khai bao bien nguyen testScore
 cout << "Enter your numeric test score and I will\n";
 cout << "tell you the letter grade you earned: ";
 cin >> testScore;//nhap vao gia tri bien testScore
 if (testScore >= MIN_SCORE && testScore <= MAX_SCORE){//khoi tao cau dieu kien if
   if (testScore >= A_SCORE)//neu bieu thuc trong ngoac thoa man thi thuc hien cau lenh xuat ra man hinh
     cout << "Your grade is A.\n";
   else if (testScore >= B_SCORE)//neu bieu thuc trong ngoac thoa man thi thuc hien cau lenh xuat ra man hinh
     cout << "Your grade is B.\n";
   else if (testScore >= C_SCORE)//neu bieu thuc trong ngoac thoa man thi thuc hien cau lenh xuat ra man hinh
     cout << "Your grade is C.\n";
   else if (testScore >= D_SCORE)//neu bieu thuc trong ngoac thoa man thi thuc hien cau lenh xuat ra man hinh
     cout << "Your grade is D.\n";
   else//neu cac bieu thuc trong ngoac khong thoa man thi xuat ra man hinh
     cout << "Your grade is F.\n";
 }
 else{//neu bieu thuc if o dong 17 khong thoa man thi thuc hien cac cau lenh phia sau
 cout << "That is an invalid score. Run the program\n"
      << "again and enter a value in the range of\n"
      << MIN_SCORE << " through " << MAX_SCORE << ".\n";
 }
 return 0;
}
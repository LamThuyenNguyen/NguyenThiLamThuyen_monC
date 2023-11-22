//program 4.6
#include <iostream>
#include <iomanip>
using namespace std;
 int main(){
 const int HIGH_SCORE = 95; //khai abo hang ngueyn
 int score1, score2, score3; //khai bao bien nguyen dung de chua so diem ba lan kiem tra
 double average; //khai bao bien thuc de chua diem trung binh
 cout << "Enter 3 test scores and I will average them: ";
 cin >> score1 >> score2 >> score3;//nhap vao gai tri cac bien score1, score2, score3
 average = (score1 + score2 + score3) / 3.0;//gan gia tri cho bien average bang bieu thuc 
 cout << fixed << showpoint << setprecision(1);//formating
 cout << "Your average is " << average << endl;//xuat ra man hinh gia tri bien average
 if (average > HIGH_SCORE){//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngac nhon {..}
 //xuat ra man hinh
  cout << "Congratulations!\n";
  cout << "That's a high score.\n";
  cout << "You deserve a pat on the back!\n";
 }
 return 0;
}
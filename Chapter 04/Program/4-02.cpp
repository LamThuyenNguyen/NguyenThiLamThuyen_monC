//program 4.2
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 const int HIGH_SCORE = 95; //khai bao hang nguyen
 int score1, score2, score3;
 double average; //khai bao bien thuc
 cout << "Enter 3 test scores and I will average them: ";
 cin >> score1 >> score2 >> score3;//nhap vao gia tri cua bien score1, score2, score3
 average = (score1 + score2 + score3) / 3.0;//gan gia tri cho bien average bang bieu thuc
 cout << fixed << showpoint << setprecision(1);//formating
 cout << "Your average is " << average << endl;//xuat ra man hinh gia tri bien average
 if (average > HIGH_SCORE)//neu gia tri cua bieu thuc trong ngoac dung thi xuat ra man hinh
  cout << "Congratulations! That's a high score!\n";
 return 0;
}
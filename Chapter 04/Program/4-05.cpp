//program 4.5
#include <iostream>
#include <iomanip>
using namespace std;
 int main(){
 int score1, score2, score3; //khai bao bien nguyen
 double average; //khai bao bien thuc
 cout << "Enter 3 test scores and I will average them: ";
 cin >> score1 >> score2 >> score3;//nhap vao gia tri cac bien score1, score2, score3
 average = (score1 + score2 + score3) / 3.0;//gan gia tri cho bien average bang bieu thuc
 cout << fixed << showpoint << setprecision(1);//formating
 cout << "Your average is " << average << endl;//xuat ra man hinh gia tri bien average
 if (average = 100) //neu bieu thuc trong ngoac dung thi thuc hien cau lenh tiep theo
  cout << "Congratulations! That's a perfect score!\n";//xuat ra man hinh
 return 0;
}
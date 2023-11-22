//program 5.7
#include <iostream>
using namespace std;
int main(){
 int score1, score2, score3;//khai bao bien nguyen
 double average;//khai bao bien thuc chua gia tri trung binh
 char again;//khai bao bien ky tu 
 do
 {
   cout << "Enter 3 scores and I will average them: ";
   cin >> score1 >> score2 >> score3;//nhap vao gia tri 3 bien
   average = (score1 + score2 + score3) / 3.0;//gan gia tri cho bien average bang bieu thuc
   cout << "The average is " << average << ".\n";
   cout << "Do you want to average another set? (Y/N) ";
   cin >> again;//nhap vao gia tri bien again
 } while (again == 'Y' || again == 'y');//lap lai khi bieu thuc trong gnoac thoa man 
 return 0;
}
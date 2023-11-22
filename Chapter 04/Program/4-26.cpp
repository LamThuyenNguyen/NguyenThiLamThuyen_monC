//program 4.26
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 char feedGrade;//khai bao bien ky tu feedGrade
 cout << "Our pet food is available in three grades:\n";
 cout << "A, B, and C. Which do you want pricing for? ";
 cin >> feedGrade;//nhap vao bien ky tu feedGrace
 switch(feedGrade){//khoi tao cau dieu kien switch den chia truong hop cho bien feedGrade
    //neu feedGrade thuoc truong hop a hoac A thi thuc hien lenh
    case 'a':
    case 'A': cout << "30 cents per pound.\n";
              break;//dung lenh switch
    //neu feedGrade thuoc truong hop b hoac B thi thuc hien lenh
    case 'b':
    case 'B': cout << "20 cents per pound.\n";
              break;//dung lenh switch
    //neu feedGrade thuoc truong hop c hoac C thi thuc hien lenh
    case 'c':
    case 'C': cout << "15 cents per pound.\n";
              break;//dung lenh switch
    //neu feedGrade trong thuoc truong hop nao o tren thi thuc hien lenh
    default: cout << "That is an invalid choice.\n";
 }
 return 0;
}
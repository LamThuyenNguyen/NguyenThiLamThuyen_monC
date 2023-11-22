//program 5.6
#include <iostream>
using namespace std;
int main(){
 //khai bao hang nguyen
 const int MIN_NUMBER = 1,
           MAX_NUMBER = 10; 
 int num = MIN_NUMBER; //khai bao bien nguyen 
 cout << "Number Number Squared\n";
 cout << "-------------------------\n";
 while (num <= MAX_NUMBER){//khoi tao vong lap while, thuc hien cac cau lenh trong {..} num <= MAX_NUMBER
   cout << num << "\t\t" << (num * num) << endl;//xuat ra gia tri bien num, tab , xuat ra gia tri bieu thuc num*num, xuong dong
   num++;//num tang len 1 don vi
 }
 return 0;
}
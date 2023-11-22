//program 5.9
#include <iostream>
using namespace std;
int main(){
 //khai bao hang nguyen
 const int MIN_NUMBER = 1,
           MAX_NUMBER = 10;
 //khai bao bien nguyen
 int num;
 cout << "Number Number Squared\n";
 cout << "-------------------------\n";
 //khoi tao vong lap for, duyet vong lap den khi gia tri num khong con thoa man dieu kien, xuat ra man hinh gia tri
 for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
      cout << num << "\t\t" << (num * num) << endl;
 return 0;
}
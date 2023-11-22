//program 5.9
#include <iostream>
using namespace std;
int main(){
 //khai bao bien nguyen
 int minNumber,
     maxNumber;
 cout << "I will display a table of numbers and "
      << "their squares.\n"
      << "Enter the starting number: ";
 cin >> minNumber;//nhap vap gia tri bien minNumber
 cout << "Enter the ending number: ";
 cin >> maxNumber;//nhap vao gia tri bien maxNumber
 cout << "Number Number Squared\n"
      << "-------------------------\n";
 //khoi tao vong lap for duyet tung gia tri cua bien num, xuat ra man hinh bieu thuc num*num, sau do tang num len 1 don vi , den khi num > maxNumber
 for (int num = minNumber; num <= maxNumber; num++)
 cout << num << "\t\t" << (num * num) << endl;
 return 0;
}
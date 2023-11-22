//program 4.30
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 int number;//khai bao bien nguyen number thu nhat
 cout << "Enter a number greater than 0: ";
 cin >> number;//nhap vao gia tri bien number
 if (number > 0){
   int number;//khai bao mot bien number thu hai
   cout << "Now enter another number: ";
   cin >> number;//nhap vao gia tri bien number
   cout << "The second number you entered was "
        << number << endl;//xuat ra gia tri bien number thu hai
 }
 cout << "Your first number was " << number << endl;//xuat ra man hinh gia tri bien number thu hai
 return 0;
}
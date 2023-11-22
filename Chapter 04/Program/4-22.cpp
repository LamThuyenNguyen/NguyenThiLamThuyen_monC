//program 4.22
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 const double PAY_RATE = 50.0;//khai bao hang thuc
 const int MIN_HOURS = 5;//khai bao hang nguyen
 //khia bao bien thuc hours, charge
 double hours,
        charges;
 cout << "How many hours were worked? ";
 cin >> hours;//nhap vao gia tri bien hours
 hours = hours < MIN_HOURS ? MIN_HOURS : hours;//gan gai tri cho bien hours bang bieu thuc 3 ngoi
 charges = PAY_RATE * hours;//gan gia tri cho bien charges bang bieu thuc
 cout << fixed << showpoint << setprecision(2)//formating
      << "The charges are $" << charges << endl;//xuat ra man hinh bien charges
 return 0;
}
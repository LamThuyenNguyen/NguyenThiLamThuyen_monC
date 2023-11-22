//programming challenges 10
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  const float PERCENT = 0.8;//khai bao hang thuc
  float cost,//khai bao bien thuc
        insure;
  cout << "The amount it would cost to raplace the structure: ";
  cin >> cost;//nhap vao gia tri bien cost
  insure = cost*PERCENT;//gan gia tri cho bien insure bang bieu thuc
  cout << "The minimum amount of insurance he or she should buy for the property: " << insure;//xuat ra man hinh gia tri bien insure
  return 0; 
}
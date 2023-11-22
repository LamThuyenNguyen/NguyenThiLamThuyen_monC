//programming challenges 6
#include <iostream>
using namespace std;
int main(){
  //khai bao va gan gia tri cho bien nguyen payAmount va bien nguyen payPeriods
  int payAmount = 2200,
      payPeriods = 26;
  long long annualPay = payAmount * payPeriods;//khai bao va gan gia tri cho bien nguyen annualPay bang bieu thuc
  cout << "The total annual pay: " << annualPay << "$";//xuat ra man hinh gia tri bien annualPay-
  return 0;
}
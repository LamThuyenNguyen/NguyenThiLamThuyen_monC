////program challenges 17
#include <iostream>
using namespace std;
int main(){
  int share = 750,//khai bao va gan gia tri cho bien nguyen share
      paidStrock = 750 * 35;//khai bao va gan gia tri bang bieu thuc cho bein nguyen paidStrock
  double commission = paidStrock * 0.02;//khai bao va gan gia tri cho bien nguyen commission
  cout << "The amount paid for the strock alone: " << paidStrock << "$" << endl;//xuat ra man hinh gia tri bien paidStrock
  cout << "The amount of the commission: " << commission << "$" << endl;//xuat ra man hinh gia tri bien commission
  cout << "The total amount paid for the strock plus the commission: " << paidStrock + commission;//xuat ra man hinh gia tri bieu thuc paidStrock + commission
  return 0; 
}
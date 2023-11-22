//programming challenges 3
#include <iostream>
using namespace std;
int main(){
  double purchae = 95;//khai bao va gan gia tri cho bien nguyen purchae
  //khai bao va gan gia tri cho bien nguyen stateSalesTax,  countySalesTax 
  double stateSalesTax = 0.04,
         countySalesTax = 0.02;
  double totalTax =  purchae*stateSalesTax + purchae*countySalesTax;//khai bao va gan gia tri bang bieu thuc cho bien thuc totalTax
  cout << "The total sales tax is: " << totalTax << "$";//xuat ra man hinh gia tri bien totalTax
  return 0;
}
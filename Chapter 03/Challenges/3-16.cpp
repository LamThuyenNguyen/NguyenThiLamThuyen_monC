//programming challenges 16
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  //khai bao hang thuc
  const float ASSESSMENT_PER = 0.6;
  //khai bao hang nguyen
  const int FIVE_THOUSAND    = 5000,
            HUNDRED          = 100,
            FOUR             = 4;
  //khai bao bien thuc
  float property,
        taxRate,
        propertyTax,
        taxBill;
  cout << endl;
  cout << "Property: ";
  cin >> property;//nhap vao man hinh gai tri bien property
  cout << "Current Tax Rate: ";
  cin >> taxRate;//nhap voa man hinh bien taxRate
  //gan gia tri cho bien propertyTax va bien taxBill bang bieu thuc
  propertyTax = (((property*ASSESSMENT_PER)- FIVE_THOUSAND)/ HUNDRED)* taxRate;
  taxBill = propertyTax/FOUR;
  cout << setprecision(2) << fixed << right << endl;//formating
cout << "Property:     ";
cout << setw(11) << property << endl;//xuat ra man hinh gia tri bien property
cout << "Property Tax: ";
cout << setw(11) << propertyTax << endl;//xuat ra man hinh gia tri bien propertyTax
cout << "Tax Bill:     ";
cout << setw(11) << taxBill << endl;//xuat ra man hinh gai tri bien taxBill
return 0;
}

        
 
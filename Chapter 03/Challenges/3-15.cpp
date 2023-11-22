//programming challenges 15
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  //khai bao hang thuc
  const float ASSESSMENT_PER = 0.6,
              PROPERTY_TAX_PER = 0.75,
              HUNDRED = 100;
  //khai bao bien thuc
  float assessment,
        tax,
        property;
  //xuat ra man hinh cau dan
  cout << "Property:  ";
  cin >> property;//nhap vao gia tri property
  assessment = property * ASSESSMENT_PER;//gan gia tri cho bien assessment bang bieu thuc
  tax = (assessment/HUNDRED) * PROPERTY_TAX_PER;//gan gia tri cua bien tax bang bieu thuc
  cout << setprecision(2) << fixed << right << endl;//formating
  //xuat ra man hinh ket qua
  cout << "Property:     $" << setw(12) << property << endl;
  cout << "Assessment:   $" << setw(12) << assessment << endl;
  cout << "Tax:          $" << setw(12) << tax << endl;
  cout << endl;
  return 0; 
}
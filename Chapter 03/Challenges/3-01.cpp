//programming challenges 1
#include <iostream>
using namespace std;
int main(){
  //khai bao cac bien thuc gallon, mile.= va perGallonGas
  double gallon,
         mile,
         perGallonGas;
  cout << "Enter the number of gallons of the car can hold: ";
  cin >> gallon;//nhap vao gia tri bien gallon
  cout << "Enter thenumber of miles it can be driven on a full tank: ";
  cin >> mile;//nhap voa gia tri bien mile
  perGallonGas = mile/gallon;//gan gia tri cho bien perGallonGas bang bieu thuc
  cout << "The number of miles that may be driven per gallon of gas: " << perGallonGas;//xuat ra man hinh gia tri bien perGallonGas
  return 0;
}
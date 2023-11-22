//programming challenges 20
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
  //khai bao hang thuc
  const double AREA_SLICE = 14.125,
               PI         = 3.14159;
  //khai bao bien thuc            
  double diameter,
         radius,
         areaPizza,
         slices;
  cout << "The diameter of the pizza in inches: ";
  cin >> diameter;//nhap vao gia tri bien diameter
  //gan gia tri cho bien radius, areaPizza, slices bang bieu thuc
  radius = diameter/2;
  areaPizza = PI*pow(radius, 2);
  slices = areaPizza/AREA_SLICE;
  //xuat ra man hinh ket qua sau khi da dinh dang
  cout << "The number of slices: " << setprecision(1) << fixed << slices << endl;
  return 0;
}

        
 
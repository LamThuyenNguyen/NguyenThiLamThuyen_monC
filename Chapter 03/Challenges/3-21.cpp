//programming challenges 21
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
         slices,
         slicesNeeded,
         pizza;
  int people;
  cout << "The diameter of the pizza in inches: ";
  cin >> diameter;//nhap vao gia tri bien diameter
  //gan gia tri cho bien radius, areaPizza, slices bang bieu thuc
  radius = diameter/2;
  areaPizza = PI*pow(radius, 2);
  slices = areaPizza/AREA_SLICE;
  cout << "What is the number of people who will be at the party?: ";
  cin >> people;//nhap vao gia tri bien people
  //gan gai tri cho bien slucesNeeded va bien pizza bang bieu thuc
  slicesNeeded = people*4;
  pizza = slicesNeeded/slices;
  //xuat ra man hinh ket qua thu duco sau khi da dinhdionh dang
  cout << "Number of the pizzas to order: " << setprecision(0) << fixed << pizza + 1 << endl;
  return 0;
}

        
 
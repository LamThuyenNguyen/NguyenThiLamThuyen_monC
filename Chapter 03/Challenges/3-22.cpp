//programming challenges 22
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
  double angle;//khai bao bien thuc
  cout << "Enter an angles: ";
  cin >> angle;//nhap vao gia tri bien angle
  //xuat ra man hinh ket qua cua cac ham sine, cossine, tan khi dua vao gai tri angle, can le 10 khoang cach 
  cout << "Sine of the angles:    " << setw(10) << sin(angle) << endl;
  cout << "Cossine of the angles: " << setw(10) << cos(angle) << endl;
  cout << "Tangent of angle:      " << setw(10) << tan(angle);
  return 0;
}

        
 
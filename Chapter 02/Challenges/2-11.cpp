////program challenges 11
#include <iostream>
using namespace std;
int main(){
  //khai bao va gan gia tri cac bien mpgTown, mpgHighWay
  double mpgTown = 23.5, 
         mpgHighway = 28.9;
  //khai bao va gan gia tri bang bieu thuc cho bien distanceTown, distanceHighway
  double distanceTown = mpgTown * 20,
         distanceHighway = mpgHighway * 20;
  cout << "The distance the car can travel on one tank of gas when driven in town: " << distanceTown << endl;//xuat ra man hinh gia tri bien distanceTown
  cout << "The distance the car can travel on one tank of gas when driven in highway: " << distanceHighway;//xuat ra mna hinh gai tri bien distanceHighway
  return 0; 
}
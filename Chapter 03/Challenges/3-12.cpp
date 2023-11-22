//programming challenges 12
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  //khai bao bien thuc chua so nhiet do C, do F
  float F,
        C;
  cout << "\nEnter the celsius temp: ";
  cin >> C;//nhap vao man hinh gia tri bien C
  F = ((9.0 / 5.0) * C) + 32;//gan gia tri cho bien F bang bieu thuc
  cout << setprecision(1) << fixed << right << endl;//mac dinh 1 so thap phan
  //xuat ra man hinh ket qua
  cout << "Celius    Temp = " << setw(6) << C << endl;
  cout << "Fahreheit Temp = " << setw(6) << F << endl;
  return 0; 
}
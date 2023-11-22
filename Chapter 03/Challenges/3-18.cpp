//programming challenges 18
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
  //khai bao hang thuc
  float amount,
        principal,
        rate,
        T;
  //xuat ra man hinh cau dan
  cout << endl;
  cout << "The principal: ";
  cin >> principal;//nhap vao so tien goc
  cout << "The interest rate: ";
  cin >> rate;//nhap vao so phan tram loi nhuan
  cout << "The number of times the interest if conpounded: ";
  cin >> T;//nhap vao so lan toi ta thu lai trong mot nam
  amount = principal*pow( 1+(rate/100) / T,T );//gan gai tri cho bien amount bang bieu thuc
  cout << setprecision(2) << fixed << right << endl;//formating
  //xuat ra man hinh gai tri cac bien, can 15 khoang cach
  cout << "Interest Rate:      " << setw(15) << T << endl; 
  cout << "Times Compounded:   " << setw(15) << T << endl;
  cout << "Principal:          " << setw(16) << principal << endl;
  cout << "Interest:           " << setw(16) << amount - principal << endl;
  cout << "Amount in Savings:  " << setw(15) << amount << endl;
  cout << endl;
  return 0;
}

        
 
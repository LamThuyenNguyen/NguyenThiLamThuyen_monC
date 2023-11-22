//programming challenges 13
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  //khia bao hang thuc
  const float YEN_PER_DOLLAR = 98.93,
              EUROS_PER_DOLLAR = 0.74;
  //khai bao hang thuc
  float dollar,
        dollarToYen,
        dollarToEuro;
  cout << "Dolar: ";
  cin >> dollar;//nhap vao man hinh gia tri bien dollar
  //gan gia tri cho bien dollarToYen va dollarToEuro bang bieu thuc
  dollarToYen = dollar * YEN_PER_DOLLAR;
  dollarToEuro = dollar * EUROS_PER_DOLLAR;
  cout << setprecision(2) << fixed;//mac dinh 2 so thap phan
  //xuat ra man hinh ket qua
  cout << "YEN: " << dollarToYen << "$" << endl;
  cout << "Euro: " << dollarToEuro << "$";
  return 0; 
}
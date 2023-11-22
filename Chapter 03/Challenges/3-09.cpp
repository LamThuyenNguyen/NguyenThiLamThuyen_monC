//programming challenges 5
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  const int CALO_3COOKIES = 300;//khai bao hang nguyen 
  //khai bao bien thuc
  float cookies, 
        calo;
  cout << "How manys the cookies you eat? ";
  cin >> cookies;//nhap vao gia tri bien cookies
  calo = (cookies/3)*CALO_3COOKIES;//gan gia tri bien calo bang bieu thuc
  cout << "Total calories: " << calo << " calories.";//xuat ra man hinh gia tri bien calo
  return 0; 
}
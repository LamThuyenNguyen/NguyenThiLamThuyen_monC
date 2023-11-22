//programming challenges 6
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  //khai bao cac bien chua cac gia tri cua cong thuc chuan lam banh quy
  double a = 48,
         sugar = 1.5,
         butter = 1,
         flour = 2.75;
  double b;//khai bao bien chua ty le cua so banh quy muon lam va so banh quy trong cong thuc 
  int cookies;//khai bao chua so luong banh quy muon lam
  cout << "How many cookies you want to make: ";
  cin >> cookies;//nhap vao gia tri cua bien cookies
  b = cookies/a;//gan gia tri cua bien b bang bieu thuc 
  cout << "The number of cups of each ingredient needed for the specified number of cookies: " << endl;
  cout << setprecision(3) << fixed << endl;//mac dinh hai so thap phan sau dau phay
  //xuat ra man hinh so cups sugar, butter va flour can dung
  cout << sugar*b << " cups of sugar." << endl;
  cout << butter*b << " cups of butter." << endl;
  cout << flour*b << " cups of flour." << endl;
  return 0; 
}
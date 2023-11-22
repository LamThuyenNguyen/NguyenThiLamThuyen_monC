//programming challenges 5
#include <iostream>
using namespace std;
int main(){
  //khai bao va gan gia tri cho bien nguyen a, b, c, d, e
  int a = 28,
      b = 32,
      c = 37,
      d = 24,
      e = 33;
  int sum = a + b + c + d + e;//khai bao va gan gia tri cho bien sum bang bieu thuc
  double average = static_cast<double>(sum) / 5;//eo kieu bien sum, khai bao va gan gai tri cho bien average bang bieu thuc
  cout << average;//xuat ra man hinh gia tri bien average
  return 0;
}
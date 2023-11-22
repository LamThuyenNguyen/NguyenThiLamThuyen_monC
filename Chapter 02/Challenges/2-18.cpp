////program challenges 18
#include <iostream>
using namespace std;
int main(){
  int customer = 16500;//khai bao va gan gia tri cho bien nguyen customer
  int a = customer * 0.15;//khai bao va gan gia tribang cong thuc cho bien nguyen a 
  int b = a*0.58;//khai bao va gan gia tri bang bieu thuc cho bien nguyen b
  cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week:" << a << endl;//xuat ra man hinh gai tri cua bien nguyen a
  cout << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks:" << b;//xuat ra amn hinh gia tri ua bien nguyen b
  return 0; 
}
//program 3.8
 #include <iostream>
 using namespace std;
 int main(){
  float test;//khai bao bien thuc test
  test = 2.0e38 * 1000;//gan gia tri bang cong thuc cho bien thuc test
  cout << test << endl;//xuat ra man hinh gia tri cua bien test
  test = 2.0e-38 / 2.0e38;//gan gia tri cho bien test bang cong thuc khac
  cout << test << endl;//xuat ra gia tri moi cua bien test
  return 0;
}
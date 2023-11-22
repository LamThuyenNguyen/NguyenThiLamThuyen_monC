//program 4.1
#include <iostream>
using namespace std;
int main(){
 bool trueValue, falseValue;//khai bao bien dung sai trueValue, falseValue
 int x = 5, y = 10;//khai bao bien nguyen
 trueValue = x < y;//gan gia tri cho trueValue bang bieu thuc
 falseValue = y == x;//gan gai tri cho falseValue bang bieu thuc
 //xuat ra man hinh gia tri cua bien truaValue va falseValue
 cout << "True is " << trueValue << endl;
 cout << "False is " << falseValue << endl;
 return 0;
}
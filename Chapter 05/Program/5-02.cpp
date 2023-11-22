//program 5.2
#include <iostream>
using namespace std;
int main(){
 int num = 4;//khai bao va gan gai tri cho bien num
 cout << num << endl;//xuat ra gia tri cua bien num
 cout << num++ << endl;//xuat ra gia tri cua bien num va tang bien num len 1 don vi
 cout << num << endl;//xuat ra gia tri cua bien num sau khi duoc gan bang num+1
 cout << ++num << endl;//xuat ra gia tri bien num sau khi da tang len 1 don vi
 cout << endl;
 cout << num << endl;//xuat ra gia tri cua bien num
 cout << num-- << endl;//xuat ra gia tri cua bien num va gia bien num mot don vi
 cout << num << endl;//xuat ra gia tri cua bien num sau khi duoc gn bang gia tri num-1
 cout << --num;//xuat ra gia tri bien num sau khi da giam xuong 1 don vi
 return 0;
}
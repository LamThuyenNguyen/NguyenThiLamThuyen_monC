//program 4.4
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 double a = 1.5; //khai bao va gan gia tri cho bien a
 double b = 1.5; //khai bao va gan gia tri cho bien b
 a += 0.0000000000000001; //cong va gan vao bien a
 if (a == b)//neu bieu thuc trong ngoac dung thi thuc cau lenh tiep theo, xuat ra man hinh 
 cout << "Both a and b are the same.\n";
 else//neu beiu thuc if(...) khong dung thi thuc hien cau lenh, xuat ra man hinh
 cout << "a and b are not the same.\n";
 return 0;
}
//program 4.20
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 char ch;//khai bao bien ky tu ch
 cout << "Enter a digit or a letter: ";
 ch = cin.get();//nhap vao gia tri bien ch
 if (ch >= '0' && ch <= '9')//neu ch la cac ky tu trong khoang '0' -> '9' thi xuat ra man hinh
    cout << "You entered a digit.\n";
 else if (ch >= 'A' && ch <= 'Z')//neu ch la cac ky tu trong khoang 'A' -> 'Z' thi xuat ra man hinh
   cout << "You entered an uppercase letter.\n";
 else if (ch >= 'a' && ch <= 'z')//neu ch la cac ky tu trong khoang 'a' -> 'z' thi xuat ra man hinh
   cout << "You entered a lowercase letter.\n";
 else//neu ch khong thuoc khoang ky tu nao thi xuat ra man hinh
   cout << "That is not a digit or a letter.\n";
 return 0;
}
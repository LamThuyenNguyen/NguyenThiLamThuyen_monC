//program 4.23
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 char choice;//khai bai bien ky tu ch
 cout << "Enter A, B, or C: ";
 cin >> choice;//nhap vao bien ky tu
 switch (choice){//khoi tao cau dieu kien switch de chia truong hop cho bien choice
   case 'A': cout << "You entered A.\n";//neu choice la ky tu A -> xuat ra man hinh 
             break;//ket thuc lenh switch
   case 'B': cout << "You entered B.\n";//neu choice la ky tu B -> xuat ra man hinh 
             break;//ket thuc lenh switch
   case 'C': cout << "You entered C.\n";//neu choice la ky tu C -> xuat ra man hinh 
             break;//ket thuc lenh switch
   default: cout << "You did not enter A, B, or C!\n";//neu choice khong phai la mot trong cac ky tu A, B, C -> xuat ra man hinh 
 }
 return 0;
}
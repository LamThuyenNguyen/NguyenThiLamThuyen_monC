//program 4.24
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 char choice;//khai bai bien ky tu ch
 cout << "Enter A, B, or C: ";
 cin >> choice;//nhap vao bien ky tu
 switch (choice){//khoi tao cau dieu kien switch de chia truong hop cho bien choice
   case 'A': cout << "You entered A.\n";//neu choice la ky tu A -> xuat ra man hinh 
   case 'B': cout << "You entered B.\n";//neu choice la ky tu B -> xuat ra man hinh 
   case 'C': cout << "You entered C.\n";//neu choice la ky tu C -> xuat ra man hinh 
   default: cout << "You did not enter A, B, or C!\n";//neu choice khong phai la mot trong cac ky tu A, B, C -> xuat ra man hinh 
 }
 //vi cac case va default khong co lenh break nen chuong trinh tiep tuc chay va thuc hien tat ca cac cau lenh trong case va default du cho case khong thoa man
 return 0;
}
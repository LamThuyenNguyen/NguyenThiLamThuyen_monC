//program 4.25
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 int modelNum;//khai bao bien nguyen modelNum
 cout << "Our TVs come in three models:\n";
 cout << "The 100, 200, and 300. Which do you want? ";
 cin >> modelNum;//nhap voa bien nguyen modelNum
 cout << "That model has the following features:\n";
 switch (modelNum){//su dung cau dieu kien switch de chia truong hop cho bien modelNum
    case 300: cout << "\tPicture-in-a-picture.\n";//neu modelNUm = 300 thi xuat ra amn hinh
    case 200: cout << "\tStereo sound.\n";//neu modelNUm = 200 thi xuat ra amn hinh
    case 100: cout << "\tRemote control.\n";//neu modelNUm = 100 thi xuat ra amn hinh
              break;//ket thuc lenh switch
    default: cout << "You can only choose the 100,";//neu modelNUm khong bang gia tri nao trong cac case thi xuat ra amn hinh
             cout << "200, or 300.\n";
 }
 //vi o case 100 co cau lenh break nen khi thuc hien chuong trinh cac case  khac deu thuc hien den cac lenh o case 200 roi moi dung cau lenh
 return 0;
}
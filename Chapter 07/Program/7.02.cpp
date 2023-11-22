//program 7.2
#include <bits/stdc++.h>
using namespace std;
int main(){
const int NUM_EMPLOYEES = 6;//khai bao hang chua so luong nhan vien (6)
 int hours[NUM_EMPLOYEES]; //Khai bao mang nguyen chua so gio lam viec cua moi nhan vien
 int count;//khai bao bien nguyen
 //khoi tao vong lap de nhap so gio lam viec cua nhan vien vao cac vi tri trong mang, cho gia tri bien count = 0, moi vong lap tang count len 1 dong vi
 for (count = 0; count < NUM_EMPLOYEES; count++){
     cout << "Enter the hours worked by employee "<< (count + 1) << ": ";
     cin >> hours[count];//nhap vao phan thu thu count cua mang hours
  }
 cout << "The hours you entered are:";
 //khoi tao vong lap xuat ra man hinh so gio lam viec cua cac nhan vien trong cong ty
 for (count = 0; count < NUM_EMPLOYEES; count++)
     cout << " " << hours[count];//xuat ra gia tri cua phan tu thu count cua mang hours
     cout << endl;
  return 0;
}
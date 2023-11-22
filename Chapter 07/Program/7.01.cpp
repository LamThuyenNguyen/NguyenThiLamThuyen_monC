//program 7.1
#include <bits/stdc++.h>
using namespace std;
int main(){
 //khai bao hang thuc
 const int NUM_EMPLOYEES = 6;
 int hours[NUM_EMPLOYEES]; //khai bao mang nguyen chua so gio lam viec cua sau nhan vien
 cout << "Enter the hours worked by "<< NUM_EMPLOYEES << " employees: "; //xuat ra man hinh nhap vao so gio lam viec cua moi nhan vien
 //nhap vao gia tri vao cac vi tri trong mang hours
 cin >> hours[0];
 cin >> hours[1];
 cin >> hours[2];
 cin >> hours[3];
 cin >> hours[4];
 cin >> hours[5];
 cout << "The hours you entered are:";
 //xuat ra gia tri vao cac vi tri trong mang hours
 cout << " " << hours[0];
 cout << " " << hours[1];
 cout << " " << hours[2];
 cout << " " << hours[3];
 cout << " " << hours[4];
 cout << " " << hours[5] << endl;
 return 0;
 }
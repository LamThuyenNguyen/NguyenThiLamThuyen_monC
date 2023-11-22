////program challenges 15
#include <iostream>
using namespace std;
int main(){
  int n = 7;//khai bao va gan gia tri cho bien nguyen n
  for ( int i = 1;  i <= n ; i+=2){//khoi tao vong lap dau tien duyet tung hang cua tam giac
     for( int j = 1; j <= n-i; j++)//khoi tao vong lap thu 2 duyet cac vi tri cua tam giac co khoang trang
     cout << " ";//xuat ra amn hinh khoang trang
     for( int j = 1; j <=i; j++){//khoi tao vong lap thu 3 duyet cac vi tri cua tam giac co *
      cout << "*";//xuat ra amn hinh *
     }
    cout << endl;//xuong dong tiep teo
  }
  return 0; 
}
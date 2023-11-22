////program challenges 16
#include <iostream>
using namespace std;
int main(){
 int n = 3;//khai bao va gan gia tri cho bien nguyen n
 for(int i =0; i <= n; i++){//khoi tao vong lap hang cua tam giac tren
  for( int j =0; j < n-i; j++)//khoi tao vong lap in ra khaong trnag
     cout << " ";
  for( int j =0; j < i*2+1; j++)//khoi tao vong lap in ra *
     cout << "*";
  cout << endl;//xuong dong sau khi ket thuc hang
 }
 for( int i = 1; i <=n; i++){//khoi tao vong lap hang cua tam giac duoi
  for( int j =0; j < i; j++){//khoi tao vong lap de in ra khoang trang
     cout << " ";
  }
  for( int j = (n*2)-i; j > i-1; j--)//khoi tao vong lap in ra *
     cout << "*";
  cout << endl;//xuong dong sau khi da ket thuc vong
 }
 return 0; 
}
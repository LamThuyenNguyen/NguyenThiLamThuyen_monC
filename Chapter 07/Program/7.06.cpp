//program 7.6
#include <bits/stdc++.h>
using namespace std;

int main(){
 const int MONTHS = 12;//khoi tao so luong phan tu trong mang 
 int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//khai bao bien nguyen days gom MONTHS phan tu duoc gan gia tri theo thu tu
 for (int count = 0; count < MONTHS; count++){//khoi tao vong lap xuat ra cac phan tu trong mang
 cout << "Month " << (count + 1) << " has ";
 cout << days[count] << " days.\n";
 }
  return 0;
}
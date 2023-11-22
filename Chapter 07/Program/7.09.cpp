//program 7.9
#include <bits/stdc++.h>
using namespace std;

int main(){
 const int SIZE = 7;//khoi tao so luong phan tu cho mang numbers
 int numbers[SIZE] = {1, 2, 4, 8};//khai bao mang nguyen numbers gom SIZE phan tu duoc gan theo thu tu
 cout << "Here are the contents of the array:\n";
 for (int index = 0; index < SIZE; index++)//khoi tao vong lap xuta ra gai tri cua cac pahn tu trong mang
 cout << numbers[index] << " ";//xuat ra gia tri cua phan tu idex cua mang numbers
 cout << endl;
 return 0;
}
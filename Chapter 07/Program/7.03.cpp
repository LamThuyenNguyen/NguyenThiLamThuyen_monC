//program 7.3
#include <bits/stdc++.h>
using namespace std;
int main(){
const int ARRAY_SIZE = 10;//khoi tao hang nguyen chua so luong phan tu cua mang numbers
 int numbers[ARRAY_SIZE];//khai bao mang nguyen numbers voi so luong phan tu bang ARRAY_SIZE
 int count = 0;//khoi tao bien dem count de dem vi tri cua cac phan tu trong mang
 ifstream inputFile; //dua vao tap tin
 inputFile.open("TenNumbers.txt");//mo tap tin
 while (count < ARRAY_SIZE && inputFile >> numbers[count])//lay gia tri trong tap tin gan vao cac phan tu cua mang
 count++;//bien count tang len mot don vi
 inputFile.close();//dong tap tin
 cout << "The numbers are: ";
 for (count = 0; count < ARRAY_SIZE; count++)//khoi tao vong lap de xuat ra cac phan tu trong mang
 cout << numbers[count] << " ";//xuat ra gia tri cua cac phan tu trong mang
 cout << endl;
 return 0;
}
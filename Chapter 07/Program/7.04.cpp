//program 7.4
#include <bits/stdc++.h>
using namespace std;
int main(){
const int ARRAY_SIZE = 10;//khai bao hang so chi so luong phan tu trong amng
int numbers[ARRAY_SIZE];//khai bao mang nguyen numbers voi so luong phan tu bang ARRAY_SIZE
int count;//khai bao bien dem count
ofstream outputFile;
for (count = 0; count < ARRAY_SIZE; count++)
numbers[count] = count;//gia tri cua phan tu thu count se duoc gan bang count
outputFile.open("SavedNumbers.txt");//mo mot file trong che do write
for (count = 0; count < ARRAY_SIZE; count++)//khoi tao vong lap de luu cac gia tri vap file
outputFile << numbers[count] << endl;
outputFile.close();//dong mot file da mo
cout << "The numbers were saved to the file.\n ";
 return 0;
}
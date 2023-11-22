//program 10.10
#include <iostream>
#include <cctype> //de su dung tolower
#include <cstring>//de su dung strcmp
#include <cstdlib>//de su dung atoi
using namespace std;
int main()
{
 //khai bao hang nguyen
 const int SIZE = 20;
 //khai bao mang ky tu input
 char input[SIZE];
 //khai bao bien nguyen
 int total = 0;//bien tich luy
 int count = 0;//bien dem
 double average;
 cout << "This program will average a series of numbers.\n";
 cout << "Enter the first number or Q to quit: ";
 //nhap vao input
 cin.getline(input, SIZE);
 //khoi tao vong lap while de xu ly cac gia tri
 while (tolower(input[0]) != 'q')
 {
   //gan gai tri cho bien total bang gia tri cua bien inout khi da chuyen sang so tu nhien
   total += atoi(input);
   //tang bien dem
   count++;
   cout << "Enter the next number or Q to quit: ";
   //nhap vao gai tri input tiep theo
   cin.getline(input, SIZE);
 }
 //neu bien dem count khac 0 -> xuat ra ra gia trung binh cua no
 if (count != 0)
 {
   average = static_cast<double>(total) / count;
   cout << "Average: " << average << endl;
 }
 return 0;
}
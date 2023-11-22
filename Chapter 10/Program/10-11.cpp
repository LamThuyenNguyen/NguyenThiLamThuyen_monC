//program 10.11
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
 //khai bao hang nguyen
 const int INPUT_SIZE = 81;
 const int NAME_SIZE = 30;
 //khai bao mang ky tu input, name
 char input[INPUT_SIZE];
 char name[NAME_SIZE];
 //khai bao bien nguyen
 int idNumber;
 int age;
 //khai bao bien thuc
 double income;
 cout << "What is your ID number? ";
 //nhap vao input
 cin.getline(input, INPUT_SIZE);
 //chuyen kieu du kieu char cua phan tu trong input-> kieu du lieu int, gan vao bien idNumber
 idNumber = atoi(input);
 cout << "What is your name? ";
 //nhap vao name
 cin.getline(name, NAME_SIZE);
 cout << "How old are you? ";
 //nhap vao input
 cin.getline(input, INPUT_SIZE);
 //chuyen kieu du kieu char cua phan tu trong input-> kieu du lieu int, gan vao bien age
 age = atoi(input);
 cout << "What is your annual income? ";
 //nhap vao input
 cin.getline(input, INPUT_SIZE);
 //chuyen kieu du kieu char cua phan tu trong input-> so thuc dau phay dong double, gan vao income
 income = atof(input);
//xuat ra man hinh ket qua
 cout << setprecision(2) << fixed << showpoint;//formating
 cout << "Your name is " << name
      <<", you are " << age
      << " years old,\nand you make $"
      << income << " per year.\n";
 return 0;
}
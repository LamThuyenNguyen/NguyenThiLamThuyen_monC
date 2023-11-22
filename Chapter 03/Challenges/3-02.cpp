//programming challenges 2
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  double classA, classB, classC,//khai bao bien thuc classA, classB, classC
         total;//khai bao bien total 
  double costA = 15,//khai bao va gan gia tri cho bien costA, costB, costC
         costB = 12,
         costC = 9;
  cout << "How many tickets for class A of seats were sold: ";
  cin >> classA;//nhap vao bien classA
  cout << "How many tickets for class B of seats were sold: ";
  cin >> classB;//nhap voa bien classB
  cout << "How many tickets for class C of seats were sold: ";
  cin >> classC;//nhap vao bien classC
  total = classA*costA + classB*costB + classC*costC;//gan gia tri cho bien total bang bieu thuc
  cout << "The amount of income generated from ticket sales: " << setprecision(2) << fixed << total << endl;//xuat ra man hinh gia tri bien total, mac dinh ket qua co 2 chu so sau dau phay
  return 0;
}
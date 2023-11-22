//program 10.2
#include <iostream>
#include <cctype>
using namespace std;
bool testNUm(char[], int);
int main(){
  //khai bao hang nguyen
  const int SIZE = 8;
  //khai bao mang ky tu customer
  char customer[SIZE];
  cout << "Enter a customer number in the form ";
  cout << "LLLNNNN\n";
  cout << "(LLL = letters and NNNN = numbers): ";
  //nhap vao customer
  cin.getline(customer, SIZE);
  //khoi tao cau dieu kien, neu ham testNum duoc truyen vao customer, size co gia tri true thi xuat ra man hinh
  if (testNum(customer, SIZE))
    cout << "That's a valid customer number.\n";
  //khoi tao cau dieu kien, neu ham testNum duoc truyen vao customer, size co gia tri flase thi xuat ra man hinh
  else
  {
    cout << "That is not the proper format of the ";
    cout << "customer number.\nHere is an example:\n";
    cout << " ABC1234\n";
  }
  return 0;
}
//khai abo ham bool testNum
bool testNum(char custNum[], int size)
{
  //tao bien dem
  int count;
  //khoi tao vong lap for
  for (count = 0; count < 3; count++)
  {
   //khoi tao cau dieu kien if, neu bieu thuc thoa man thi gia tri tra ve false
   if (!isalpha(custNum[count]))
    return false;
  }
  //khoi tao vong lpa for, kiem tra cac ky tu con lai cho chu so
  for (count = 3; count < size - 1; count++)
  {
   //khoi tao cau dieu kien if, neu bieu thuc thoa man thi gia tri tra ve false
   if (!isdigit(custNum[count]))
   return false;
  }
  //gia tri tra ve true
  return true;
}

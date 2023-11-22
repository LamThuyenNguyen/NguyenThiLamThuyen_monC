//program 10.6
#include <iostream>
#include <cstring>
using namespace std;
int main(){
  //khai bao hang nguyen
  const int NUM_PRODS = 5;
  const int LENGTH = 27;
  //khai bao mang ky tu hai chieu gom cac ky tu
  char products[NUM_PRODS][LENGTH] =
                { "TV327 31-inch Television",
                  "CD257 CD Player",
                  "TA677 Answering Machine",
                  "CS109 Car Stereo",
                  "PC955 Personal Computer" };
  //khai bao mang lookUp
  char lookUp[LENGTH];
  //tro den bien ky tu strPtr 
  char *strPtr = nullptr;
  int index;
  cout << "\tProduct Database\n\n";
  cout << "Enter a product number to search for: ";
  //nhap vao lookUp
  cin.getline(lookUp, LENGTH);
  //khai bao vong lap for
  for (index = 0; index < NUM_PRODS; index++)
  {
    strPtr = strstr(products[index], lookUp);
    //khoi tao cau dieu kien if, neu thoa man dieu kien thi dung chuong trinh
    if (strPtr != nullptr)
      break;
  }
  //khoi tao cau dieu kien if, neu thoa man dieu kien thi xuat ra man hinh
  if (strPtr != nullptr)
    cout << products[index] << endl;
  //neu khong thoa man dieu kien thi xuat ra man hinh
  else
   cout << "No matching product was found.\n";
  return 0;
}
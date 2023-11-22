//program 10.8
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main(){
  //khai bao hang thuc
  const double A_PRICE = 249.0,
               B_PRICE = 299.0;
  //khai bao hang nguyen            
  const int PART_LENGTH = 8;
  //khai bao mang ky tu partNum
  char partNum[PART_LENGTH];          
  cout << "The stereo part numbers are:\n"
       << "\tBoom Box, part number S147-29A\n"
       << "\tShelf Model, part number S147-29B\n"
       << "Enter the part number of the stereo you\n"
       << "wish to purchase: ";  
  //nhap vao mang partNum    
  cin >> partNum;
  //formating
  cout << showpoint << fixed << setprecision(2);
  //neu dieu kien thoa man thi thuc hien cau lenh ke tiep
  if (strcmp(partNum, "S147-29A") == 0)
    cout << "The price is $" << A_PRICE << endl;
  //neu dieu kien thoa man thi thuc hien cau lenh ke tiep
  else if (strcmp(partNum, "S147-29B") == 0)
    cout << "The price is $" << B_PRICE << endl;
  //neu khong dieu kien nao thoa man thi thuc hien cau lenh ke tiep 
  else
    cout << partNum << " is not a valid part number.\n";
  return 0;
}
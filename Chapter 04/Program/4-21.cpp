//program 4.21
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  //khai bao hang
 const double PRICE_A = 249.0,
              PRICE_B = 299.0;
 string partNum;//khai bao bien xau ky tu partNum
 cout << "The stereo part numbers are:\n"
      << "Boom Box: part number S-29A \n"
      << "Shelf Model: part number S-29B \n"
      << "Enter the part number of the stereo you\n"
      << "wish to purchase: ";
 cin >> partNum;//nhap vao gia tri bien partNum
 cout << fixed << showpoint << setprecision(2);//formating
 if (partNum == "S-29A")//khoi tao cau dieu kien if, neu bieu thuc trong ngoac thoa man thi xuat ra man hinh
   cout << "The price is $" << PRICE_A << endl;//xuat ra man hinh gia tri hang PRICE_A
 else if (partNum == "S-29B")//khoi tao cau dieu kien else if, neu bieu thuc trong ngoac thoa man thi xuat ra man hinh
   cout << "The price is $" << PRICE_B << endl;//xuat ra man hinh gia tri hang PRICE_B
 else//neu bieu thuc o cau lenh if va else if khong thoa man thi xuat ra man hinh
   cout << partNum << " is not a valid part number.\n";//xuat ra man hinh gai tri bien partNum
 return 0;
}
//program 10.17
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
 //khai bao hang thuc
 const double APRICE = 249.0; 
 const double BPRICE = 299.0;
 //khai bao bien xau ky tu partNum
 string partNum;
 cout << "The stereo part numbers are:\n";
 cout << "\tBoom Box, part number S147-29A\n";
 cout << "\tShelf Model, part number S147-29B\n";
 cout << "Enter the part number of the stereo you\n";
 cout << "wish to purchase: ";
 //nhap vao bien partNum
 cin >> partNum;
 //formating
 cout << fixed << showpoint << setprecision(2);
 //khoi tao cau dieu kien if else if
 //neu thoa man dieu kien o if-> thuc hien cau lenh tiep theo
 if (partNum == "S147-29A")
    cout << "The price is $" << APRICE << endl;
 //neu thoa man dieu kien o else if-> thuc hien cau lenh tiep theo   
 else if (partNum == "S147-29B")
    cout << "The price is $" << BPRICE << endl;
 //neu khong thoa duoc dieu kien nao thi thuc hien cau lenh tiep theo
 else
    cout << partNum << " is not a valid part number.\n";
 return 0;
}
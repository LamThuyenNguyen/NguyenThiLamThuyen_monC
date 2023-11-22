//program 5.23
#include <iostream>
#include <fstream>//thu vien de su dung ifstream
using namespace std;
int main(){
 ifstream inputFile;
 //khai bao bien nguyen
 int number;
 //mo file
 inputFile.open("BadListOfNumbers.txt");
 //neu file duoc mo thanh cong thi bat dau xu ly no
 if (inputFile)
 {
   //khoi tao vong lap while de doc gia tri bien number trong file va xuat ra man hinh gia tri do
   while (inputFile >> number)
   {
     cout << number << endl;
   }
   //dong file
   inputFile.close();
 }
 //neu file mo khong thanh cong thi xuat ra man hinh
 else
 {
 cout << "Error opening the file.\n";
 }
 return 0;
}
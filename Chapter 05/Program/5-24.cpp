//program 5.24
#include <iostream>
#include <string>
#include <fstream>//thu vien de su dung ifstream
using namespace std;
int main(){
 ifstream inputFile;
 //khai bao bien xau ky tu
 string filename;
 //khai bao bien nguyen
 int number;
 cout << "Enter the filename: ";
 cin >> filename;//nhap vao gia tri bien filename
 //mo file ten filename
 inputFile.open(filename);
 //neu mo file thanh cong thi thuc hien tiep chuong trinh
 if (inputFile)
 {
  //khoi tao vong lap while de doc gia tri bien number tu file va xuat ra man hinh gia tri do
  while (inputFile >> number)
  {
   cout << number << endl;
  }
  //dong file
  inputFile.close();
 }
 //neu file mo khong thanh cong thi xuat ra man hinh bao loi mo file
 else
 {
   cout << "Error opening the file.\n";
 }
 return 0;
}
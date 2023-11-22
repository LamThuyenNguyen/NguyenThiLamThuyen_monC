//program 12.02
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string input;//khai bao bien xau ky tu input
  fstream nameFile;
  //
  nameFile.open("murphy.txt", ios::in);//mo file de doc
  //khoi tao cau dieu kien if, neu mo duoc file namefile thi thuc hien cac cau lenh ben duoi
  if (nameFile)
  {
   //khi dieu kien trong ngoac thoa man thi thuc hien cac cau lenh ben duoi
   while (nameFile >> input)
   {
    cout << input;
   }
   nameFile.close();//dong file
 }
 return 0;

}

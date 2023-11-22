//program 12.05
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool openFileIn(fstream &, string);
void showContents(fstream &);
int main()
{
  fstream dataFile;
 //khoi tao cua dieu kien if, neu gia tri cua ham openFileIn khi truyen vao dataFile va demonfile.txt la dung thi thuc hien cac cau lenh ben duoi
  if (openFileIn(dataFile, "demofile.txt"))
  {
    cout << "File opened successfully.\n";
    cout << "Now reading data from the file.\n\n";
    showContents(dataFile);//goi ham showCOntents truyen vao do dataFile
    dataFile.close();//dong file
    cout << "\nDone.\n";
 }
  else//neu diue kien cua if la sai thi thuc hien cau lenh ben duoi
   cout << "File open error!" << endl; 
  return 0;
}
//khoi tao ham bool openFileIn gom fstream file va string name
bool openFIleIn(fstream &file, string name){
  file.open(name, ios::in);//mo file
  if(file.fail());//neu dieu kien if thoa man thi tra ve failse
     return false;
  else//neu dieu kien if khong thoa man thi tra ve true
     return true;
}
//khoi tao ham void showContents gom fstream file
void showContents(fstream &file)
{
  //khai bao bien xau ky tu line
  string line;
  while (file >> line)//neu bieu thuc while thoa man thi thuc hein cau lenh, xua ra man hinh
  {
    cout << ;ine << endl;
  }
}


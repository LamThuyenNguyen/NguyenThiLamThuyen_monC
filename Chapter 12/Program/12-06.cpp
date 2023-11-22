//program 12.06
#include <iostream>
#include <fstream>
using namespace std;

void showState(fstream &);

int main()
{
  //khai bao bien nguyen
  int num = 10;
  
  fstream testFile("stuff.dat", ios::out);//mo file de ghi
  if (testFile.fail())//neu dieu kien trong ngoac thi thuc hien lenh ben duoi
  {
     cout << "ERROR: Cannot open the file.\n";
     return 0;
  }
  //viet vao gia tri num
  cout << "Writing the value " << num << " to the file.\n";
  testFile << num;
  //goi gam showCase truyen vao do textFile de tim trang thai bit
  showState(testFile);
  //dong file
  testFile.close();
  //mo lai file
  testFile.open("stuff.dat", ios::in);
  if (testFile.fail())//neu dieu kien if thoa man thi thuc hien lenh ben duoi
  {
     cout << "ERROR: Cannot open the file.\n";
     return 0;
  }
  //doc gia tri duy nhat tu file
  cout << "Reading from the file.\n";
  testFile >> num;
  cout << "The value " << num << " was read.\n";
  //goi gam showCase truyen vao do textFile de tim trang thai bit
  showState(testFile);
  //khong doc duoc du lieu trong file nhung buoc thuc hien thao tac khong hop le
  cout << "Forcing a bad read operation.\n";
  testFile >> num;
  //goi gam showCase truyen vao do textFile de tim trang thai bit
  showState(testFile);
  //dong file
  testFile.close();
  return 0;
}

//khoi tao ham showState gom fstream file
void showState(fstream &file)
{
  //xuat ra man hinh cac gai tri
  cout << "File Status:\n";
  cout << "   eof bit: " << file.eof() << endl;
  cout << "   fail bit: " << file.fail() << endl;
  cout << "   bad bit: " << file.bad() << endl;
  cout << "   good bit: " << file.good() << endl;
  file.clear();
}

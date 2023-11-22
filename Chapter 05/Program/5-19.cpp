//program 5.19
#include <iostream>
#include <fstream>//thu vien de su dung ifstream
using namespace std;
int main(){
 ifstream inputFile;
 //khai bao bien xau ky tu
 string name;
 inputFile.open("Friends.txt");
 cout << "Reading data from the file.\n";
 inputFile >> name;//doc mot gia tri bien name trong file
 cout << name << endl;//xuat ra gia tri bien name
 inputFile >> name;//doc 1 gia tri khac cua bien name trong file
 cout << name << endl; //xuat ra man hinh gia tri bien name
 inputFile >> name;//doc mot gia tri khac cua bien name trong file
 cout << name << endl;//xuat ra man hinh gai tri bien name
 inputFile.close();//dong file
 return 0;
}
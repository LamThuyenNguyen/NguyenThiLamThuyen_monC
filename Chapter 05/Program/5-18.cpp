//program 5.18
#include <iostream>
#include <fstream>//thu vien de su dung ofstream
using namespace std;
int main(){
 ofstream outputFile;
 //khai bao bien xau ky tu
 string name1, name2, name3;
 //mo mfile
 outputFile.open("Friends.txt");
 cout << "Enter the names of three friends.\n";
 //nhap vao gia tri cua bien name1, name2, name3
 cout << "Friend #1: ";
 cin >> name1;
 cout << "Friend #2: ";
 cin >> name2;
 cout << "Friend #3: ";
 cin >> name3;
//ghi cac gia tri cua cac bien vao file
 outputFile << name1 << endl;
 outputFile << name2 << endl;
 outputFile << name3 << endl;
 cout << "The names were saved to a file.\n";
//dong file
 outputFile.close();
 return 0;
}
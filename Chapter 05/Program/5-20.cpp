//program 5.20
#include <iostream>
#include <fstream>//thu vien de su dung ifstream
using namespace std;
int main(){
 ifstream inFile;
 //khai bao cac bien nguyen
 int value1, value2, value3, sum;
//mo file
 inFile.open("NumericData.txt");
 //doc ba gia tri tu file
 inFile >> value1;
 inFile >> value2;
 inFile >> value3;
 //dong file
 inFile.close();
 //gan gia tri cho bien sum bang bieu thuc
 sum = value1 + value2 + value3;
 //xuat ra man hinh gai tri cac bien
 cout << "Here are the numbers:\n"
      << value1 << " " << value2
      << " " << value3 << endl;
 cout << "Their sum is: " << sum << endl;
 return 0;
}
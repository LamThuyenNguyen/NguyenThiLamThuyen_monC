//program 5.22
#include <iostream>
#include <fstream>//thu vien de su dung ifstream
using namespace std;
int main(){
 ifstream inputFile;
 //khai bao bien nguyen
 int number;
 //mo file
 inputFile.open("ListOfNumbers.txt");
 //khoi tao vong lap while de doc gia tri number trong file va xuat ra man hinh gia tri do
 while (inputFile >> number)
 {
 cout << number << endl;
 } 
 //dong file 
 inputFile.close();
 return 0;
}
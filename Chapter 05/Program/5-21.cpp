//program 5.21
#include <iostream>
#include <fstream>//thu vien de su dung ofstream
using namespace std;
int main(){
 ofstream outputFile;
 //khai bao bien nguyen
 int numberOfDays;
 //khai bao bien thuc
 double sales; 
 cout << "For how many days do you have sales? ";
 cin >> numberOfDays;//nhap vao gia tri bien numberOfDays
 //mo file
 outputFile.open("Sales.txt");
 //khoi tao vong lap for de tinh toan gia tri  bien sales va ghi no vao file
 for (int count = 1; count <= numberOfDays; count++)
 {
   cout << "Enter the sales for day "
        << count << ": ";
   cin >> sales;//nhap vao gia tri bien sales
  //ghi gia tri cua bien sales vao file
   outputFile << sales << endl;
 }
 //dong file 
   outputFile.close();
   cout << "Data written to Sales.txt\n";
 return 0;
}
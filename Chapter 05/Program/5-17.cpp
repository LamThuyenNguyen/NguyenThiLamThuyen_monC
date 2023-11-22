//program 5.17
#include <iostream>
#include <fstream>//thu vien de su dung ofstream
using namespace std;
int main(){
 ofstream outputFile;
 //khai bao bien nguyen
 int number1, number2, number3;
 //mo file
 outputFile.open("Numbers.txt");
 //nhap vao gai tri cua bien number1, numer2, numer3
 cout << "Enter a number: ";
 cin >> number1;
 cout << "Enter another number: ";
 cin >> number2;
 cout << "One more time. Enter a number: ";
 cin >> number3;
 //ghi cac gia tri cua cac bien vao file
 outputFile << number1 << endl;
 outputFile << number2 << endl;
 outputFile << number3 << endl;
 cout << "The numbers were saved to a file.\n";
 //dong file
 outputFile.close();
 cout << "Done.\n";
 return 0;
}
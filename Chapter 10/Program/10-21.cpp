//program 10.21
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //khai bao bien xau ky tu  
 string town; 
 cout << "Where do you live? ";
 //nhap vao gia tri bien town
 cin >> town;
 //xuat ra chieu dai cua bien town
 cout << "Your town's name has " << town.length() ;
 cout << " characters\n";
 return 0;
}
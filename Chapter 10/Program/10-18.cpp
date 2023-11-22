//program 10.18
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
   //khai bao bien xaa ky tu name1, name2;
 string name1, name2;
 cout << "Enter a name (last name first): ";
 //nhap vao name1
 getline(cin, name1);
 cout << "Enter another name: ";
 //nhap vao name2
 getline(cin, name2);
 cout << "Here are the names sorted alphabetically:\n";
 //khoi tao cau dieu kien if else if
 //neu thoa man dieu kien o if thi thuc hien cau lenh tiep theo
 if (name1 < name2)
   cout << name1 << endl << name2 << endl;
 //neu thoa man dieu kien o else if thi thuc hien cau lenh tiep theo
 else if (name1 > name2)
   cout << name2 << endl << name1 << endl;
 //neu khong thoa man dieu kien o if hay else if thi thuc hien cau lenh tiep theo
 else
   cout << "You entered the same name twice!\n";
 return 0;
}
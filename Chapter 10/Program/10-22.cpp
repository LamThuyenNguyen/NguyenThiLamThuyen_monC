//program 10.20
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 //khai bao bien xau ky tu  
 string str1, str2, str3; 
 //gan gia tri cho str1, str2, str3
 str1 = "ABC";
 str2 = "DEF";
 str3 = str1 + str2;
 //su dung vong lap for de xuat ra gia tri cua str3 
 for (int x = 0; x < str3.size(); x++)
 cout << str3[x];
 cout << endl;
 //khoi tao cau dieu kien if de so sanh gia tri str1 va str2 
 //neu dieu kien o if thoa man thi thuc hien cau lenh tiep theo
 if (str1 < str2)
   cout << "str1 is less than str2\n";
 //neu dieu kien o if khogn thoa man thi thuc hien cau lenh tiep theo o dong else
 else
   cout << "str1 is not less than str2\n";
 return 0;
}
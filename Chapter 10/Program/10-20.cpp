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
 //xuat ra man hinh gia tri cac bien str1 str2, str3
 cout << str1 << endl;
 cout << str2 << endl;
 cout << str3 << endl;
 //cong them mot gia tri cho bien str3 va xuat ra man hinh
 str3 += "GHI";
 cout << str3 << endl;
 return 0;
}
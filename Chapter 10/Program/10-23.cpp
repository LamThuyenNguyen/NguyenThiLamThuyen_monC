//program 10.23
#include <iostream>
#include <string>
using namespace std;
void dollarFormat(string &);
int main()
{
 //khai bao bien xau ly tu input
 string input;
 cout << "Enter a dollar amount in the form nnnnn.nn : ";
 //nhap vao bien input
 cin >> input;
 //goi ham dollarFormat truyen vao do input
 dollarFormat(input);
 cout << "Here is the amount formatted:\n";
 cout << input << endl;
 return 0;
}
//khai bao ham dollarFormat gom xau ky tu currency
void dollarFormat(string &currency){
 int dp;
  //tim vi tri dau '.' va gan ket qua cho bien dp
 dp = currency.find('.'); 
  //neu gia tri bien dp lon hon 3 thi thuc hien cac lenh sau
 if (dp > 3)
 {
   //khoi tao vong lap
  for (int x = dp - 3; x > 0; x -= 3)
     //chen ky tu ',' tai vi tri tim duoc
     currency.insert(x, ",");
  }
  //chen ky tu '$ vao vi tri 0
  currency.insert(0, "$");
}


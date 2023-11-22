//program 10.3
#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;
int main()
{
 //khai bao hang thuc
 const double PI = 3.14159;
 //khai bao bien thuc
 double radius;
 //khai bao bien ky tu
 char goAgain;
 cout << "This program calculates the area of a circle.\n";
 //formating
 cout << fixed << setprecision(2);
 //khoi tao vong lap do while
 do
 {
   cout << "Enter the circle's radius: ";
   //nhap vao bien radius
   cin >> radius;
   cout << "The area is " << (PI * radius * radius);
   cout << endl;
   cout << "Calculate another? (Y or N) ";
   //nhap vao bien goAgain
   cin >> goAgain;
   //xac thuc dau ra
   while (toupper(goAgain) != 'Y' && toupper(goAgain) != 'N')
   { 
     cout << "Please enter Y or N: ";
     cin >> goAgain;
   }
 } while (toupper(goAgain) == 'Y');//lap lai vong lap khi thoa man dieu kien
 return 0;
}
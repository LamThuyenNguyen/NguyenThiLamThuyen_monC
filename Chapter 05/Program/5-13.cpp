//program 5.13
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 //khai bao bien nguyen
 int game = 1,
     points,
     total = 0;
 cout << "Enter the number of points your team has earned\n";
 cout << "so far in the season, then enter −1 when finished.\n\n";
 cout << "Enter the points for game " << game << ": ";
 cin >> points;//nhap vao gia tri bien nguyen
 //khoi tao vong lap while de tim gia tri bien total
 while (points != -1)
 {
   total += points;//cong don bien points vao bien total
   game++;//tang bien gmae len 1 don vi
   cout << "Enter the points for game " << game << ": ";
   cin >> points;//nhap vao gia tri bien points
 }
 cout << "\nThe total points are " << total << endl;//xuat ra gia tri bien total
 return 0;
}
//program 2.10
#include <iostream>
 using namespace std;
 int main(){
 int checking;
 unsigned int miles;//khai bao bien co kieu du lieu unsigned int - miles 
 long days;//khai bao bien co du kieu lieu long - days
 //gan gai tri cho cac bien checking, miles, days
 checking = -20;
 miles = 4276;
 days = 189000;
 cout << "We have made a long journey of " << miles;//xuat ra man hinh gia tri cua bien miles
 cout << " miles.\n";//xuat ra 'miles' va xuong dong
 cout << "Our checking account balance is " << checking;//xuat ra man hinh gia tri cua bien checking
 cout << "\nAbout " << days << " days ago Columbus ";//xuong dong sau do xuat ra man hinh 'About', gia tri bien days, ' days ago Columbus'
 cout << "stood on this spot.\n";//xuat ra man hinh 'stood on this spot.' va xuong dong
 return 0;
 }
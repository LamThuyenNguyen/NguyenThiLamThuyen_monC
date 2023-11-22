//program 3.28
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  //khia bao cac hang thuc
 const double COST_PER_CUBIC_FOOT = 0.23;
 const double CHARGE_PER_CUBIC_FOOT = 0.5;
 //khai bao cac bien thuc
 double length, // The crate's length
 width, // The crate's width
 height, // The crate's height
 volume, // The volume of the crate
 cost, // The cost to build the crate
 charge, // The customer charge for the crate
 profit; // The profit made on the crate
 cout << setprecision(2) << fixed << showpoint;//mac dinh 1 so thap phan sau dau phay
 cout << "Enter the dimensions of the crate (in feet):\n";
 cout << "Length: ";
 cin >> length;//nhap vao gia tri bien length
 cout << "Width: ";
 cin >> width;//nhap vao gia tri bien width
 cout << "Height: ";
 cin >> height;//nhap vao gia tri bien height
 //gan gia tri cho cac bien volume, cost, charge, profit bang bieu thuc
 volume = length * width * height;
 cost = volume * COST_PER_CUBIC_FOOT;
 charge = volume * CHARGE_PER_CUBIC_FOOT;
 profit = charge - cost;
 cout << "The volume of the crate is ";
 cout << volume << " cubic feet.\n";//xuat ra man hinh gia tri bien volume
 cout << "Cost to build: $" << cost << endl;//xuat ra man hinh gia tri bien cost
 cout << "Charge to customer: $" << charge << endl;//xuat ra man hinh gia tri bien charge
 cout << "Profit: $" << profit << endl;//xuat ra man hinh gia tri bien profit
 return 0;
}
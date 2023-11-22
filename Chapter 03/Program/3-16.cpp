//program 3.16
 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main(){
  double day1, day2, day3, total;//khai bao bien thuc day1, day2, day3, total
  cout << "Enter the sales for day 1: ";
  cin >> day1;//nhap vao gia tri bien day1
  cout << "Enter the sales for day 2: ";
  cin >> day2;//nhap vao gia tri bien day2
  cout << "Enter the sales for day 3: ";
  cin >> day3;//nhap vao gia tri bien day3
  total = day1 + day2 + day3;//gan gia tri cho bien total bang bieu thuc
  cout << "\nSales Figures\n";
  cout << "-------------\n";
  cout << setprecision(2);//cai dat 2 so thap phan sau dau phay
  //xuat ra man hinh gia tri cua cac bien cach 8 khoang cach tinh tu ky tu cuoi cung
  cout << "Day 1: " << setw(8) << day1 << endl;
  cout << "Day 2: " << setw(8) << day2 << endl;
  cout << "Day 3: " << setw(8) << day3 << endl;
  cout << "Total: " << setw(8) << total << endl;
  return 0;
}
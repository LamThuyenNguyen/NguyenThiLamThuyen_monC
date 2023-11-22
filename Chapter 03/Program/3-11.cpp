//program 3.11
 #include <iostream>
 using namespace std;
 int main(){
  int begInv,//khai bao cac bien nguyen begInv, sold, store1, store2 store3
     sold,
     store1,
     store2,
     store3;
  //xuat ra man hinh cau dan
  cout << "One week ago, 3 new widget stores opened\n";
  cout << "at the same time with the same beginning\n";
  cout << "inventory. What was the beginning inventory? ";
  cin >> begInv;//nhap vao gai tri bien begInv
  store1 = store2 = store3 = begInv;//gan gia tri cho bien store1 bang gia tri cac bien store2, store3, begInv
  cout << "How many widgets has store 1 sold? ";
  cin >> sold;//nhap vao gia tri bien sold
  store1 -= sold;//bot 1 don vi cua bien sold va gan vao bien store1
  cout << "How many widgets has store 2 sold? ";
  cin >> sold;//nhap vao gia tri bien sold
  store2 -= sold;//bot 1 don vi cua bien sold va gan vao bien store1
  cout << "How many widgets has store 3 sold? ";
  cin >> sold;//nhap vao gia tri bien sold
  store3 -= sold;//bot 1 don vi cua bien sold va gan vao bien store1
  cout << "\nThe current inventory of each store:\n";
  //xuat ra man hinh gia tri cua cac bien
  cout << "Store 1: " << store1 << endl;
  cout << "Store 2: " << store2 << endl;
  cout << "Store 3: " << store3 << endl;
  return 0;
}
//program 11.6
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//khai bao struct InventoryItem
struct InventoryItem
{
  int partNum;
  string description;
  int onHand;
  double price;
};
//khai bao ham getItem, showItem
void getItem(InvebtoryItem&);
void showItem(InventoryItem);

int main()
{
  //tao cau truc InventoryItem co ten part
  InventoryItem part;
  //goi ham getItem truyen vao do gia tri part
  getItem(part);
  //goi ham showItem truyen voa do gia tri part
  showItem(part);
  return 0;
}

//khai bao ham getItem gom cau truc InventoryItem 
void getItem(InventoryItem &p)
{

  cout << "Enter the part number: ";
  //nhap vao gai tri thanh vien partNum cua p
  cin >> p.partNum;
  cout << "Enter the part description: ";
  cin.ignore(); 
  //nhap vao gia tri thanh vien description cua p
  getline(cin, p.description);
  //nhap vao gia tri thanh vien onHand cua p
  cout << "Enter the quantity on hand: ";
  cin >> p.onHand;
  //nhap vao gia tri thanh vien price cua p
  cout << "Enter the unit price: ";
  cin >> p.price;
}

//khai bao ham showItem gon cau truc InventoryItem
void showItem(InventoryItem p)
{
  //formating
  cout << fixed << showpoint << setprecision(2);
  //xuat ra gai tri cua cac thanh vien trong p
  cout << "Part Number: " << p.partNum << endl;
  cout << "Description: " << p.description << endl;
  cout << "Units On Hand: " << p.onHand << endl;
  cout << "Price: $" << p.price << endl; 
}

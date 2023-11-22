//programming challenges 8
#include <iostream>
using namespace std;
int main(){
  //khai bao va gan gia tri cho cac bien thuc
  double item1 = 15.95,
         item2 = 34.95,
         item3 = 6.95,
         item4 = 12.95,
         item5 = 3.95;
  double subTotal = item1 + item2 + item3 + item4 + item5;//gan gia tri cho bien subTotal bang bieu thuc
  //gam gia tri cho cac bien amountSaleTax, total bang bieu thuc cho san
  double amountSaleTax = subTotal * 0.07,
         total = subTotal + amountSaleTax;
  //xuat ra man hinh gia tri cua cac item1->item5
  cout << "Price of the item 1: " << item1 << "$" << endl;
  cout << "Price of the item 2: " << item2 << "$" << endl;
  cout << "Price of the item 3: " << item3 << "$" << endl;
  cout << "Price of the item 4: " << item4 << "$" << endl;
  cout << "Price of the item 5: " << item5 << "$" << endl;
  cout << "The subtotal of the sales: " << subTotal << "$" << endl;//xuat ra man hinh gia tri cua bien subTotal
  cout << "The amount of sales tax: " << amountSaleTax << "$" << endl;//xuat ra man hinh gia tri cua bien amountSaleTax
  cout << "Total: " << total << "$";//xuat ra man hinh gia tri cua bien total
  return 0;
}
//program 2.23
 #include <iostream>
 using namespace std;
 int main(){
 double regularPrice = 59.95, discount, salePrice;//khai bao bien thuc regularPrice, discount, salePrice va gan gai tri cho bien thuc regularprice
 discount = regularPrice * 0.2;//gan gia tri cho bien discount bang cong thuc cho san
 salePrice = regularPrice - discount;//gan gia tri cho bien salePrice
 //xuat ra man hinh gia tri cac bien 
 cout << "Regular price: $" << regularPrice << endl; 
 cout << "Discount amount: $" << discount << endl;
 cout << "Sale price: $" << salePrice << endl;
 return 0;
}
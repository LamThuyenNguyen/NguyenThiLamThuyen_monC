//programming challenges 4
#include <iostream>
using namespace std;
int main(){
 double mealCost = 88.67;//khai bao va gan gia tri cho bien mealCost;
 //khai bao va gan gia tri bang bieu thuc cho bien thuc tax, bien thuc tip va bien thuc total
 double tax = 0.0675 * mealCost,
        tip = 0.2 * mealCost,
        total = mealCost + tax + tip;
  //xuat ra man hinh gia tri cua cac bien, xuong dong khi ket thuc cau
  cout << "The meal cost: " << mealCost << "$" << endl;
  cout << "The tax amount: " << tax << "$" << endl;
  cout << "The tip amount: " << "$" << endl;
  cout << "Total: "<< total << "$" << endl;
  return 0;
}
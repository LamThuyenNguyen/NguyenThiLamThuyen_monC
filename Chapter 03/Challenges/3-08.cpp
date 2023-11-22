//programming challenges 8
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  const float INDV_WIDGET_WEIGHT = 12.5;//khai bao hang thuc
  //khai bao bien thuc
  float palletItself,
        palletWidgets,
        widgetWeight,
        numWidgets;
  cout << "How much does the pallet weight by itself? ";
  cin >> palletItself;//nhap vao gia tri bien palletItself
  cout << "How much does the pallet weight by widgets? ";
  cin >> palletWidgets;//nhap vao gia tri bien palletWidgets
  widgetWeight = palletWidgets - palletItself;//gan gia tri cho bien widgetWeight bang bieu thuc
  numWidgets = widgetWeight/INDV_WIDGET_WEIGHT;//gan gia tri cho bien numWidgets bang bieu thuc
  cout << setprecision(2) << fixed << right << endl;//mac dinh 2 so thap phan sau dau cham phay
  //xuat ra man hinh gai tri cua cac bien
  cout << "Individual widget weight   = " << setw(6);
  cout << INDV_WIDGET_WEIGHT << endl;
  cout << "Pallet weight              = " << setw(6);
  cout << palletItself << endl;
  cout << "Pallet weight with widgets = " << setw(6);
  cout << widgetWeight << endl;
  cout << "Number of widgets          = " << setw(6);
  cout << numWidgets << endl;
  return 0; 
}  
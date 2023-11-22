//program 5.11
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 //khai bao hang nguyen
 const int START_KPH = 60, 
           END_KPH = 130,
           INCREMENT = 10;
 //khai bao hang thuc
 const double CONVERSION_FACTOR = 0.6214;
 //khai bao bien nguyen
 int kph;
 //khai bao bien thuc
 double mph;
 cout << fixed << showpoint << setprecision(1);//formating
 cout << "KPH\tMPH\n";
 cout << "---------------\n";
 //tao vong lap for de duyet tung gia tri cua bien kph
 for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT)
 {
   //gan gia tri bien mph cho moi bien kph
   mph = kph * CONVERSION_FACTOR;
   //xuat ra man hinh gia tri bien mph
   cout << kph << "\t" << mph << endl;
 } 
 return 0;
}
//program 5.26
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 //khai bao bien nguyen
 int dvdCount = 1;
 int numDVDs;
 //khai bao bien thuc
 double total = 0.0; 
 //khai bao bien ky tu
 char current;
 cout << "How many DVDs are being rented? ";
 cin >> numDVDs;//nhap vao gia tri bien numDVDs
//khoi tao vong lap do while de xac dinh cac khoan chi phi
 do
 { 
  //neu bieu thuc trong gnoac la dung thi thuc hien cac lenh trong ngoac kep {..}
   if ((dvdCount % 3) == 0)
   {
    cout << "DVD #" << dvdCount << " is free!\n";
    continue;//thuc hien vong lap moi
   }
   cout << "Is DVD #" << dvdCount;
   cout << " a current release? (Y/N) ";
   cin >> current;//nhap vao gia tri bien currrent
   //neu bieu thuc trong ngoac if la dung thi bien total cong don 3.50 trong moi vong lap
   if (current == 'Y' || current == 'y')
         total += 3.50;
   //neu bieu thuc trong ngoac if la sai thi bien total cong don 2.50 trong moi vong lap
   else
         total += 2.50;
 } while (dvdCount++ < numDVDs);//lap lai vong lap khi bieu thuc trong ngoac dung
 cout << fixed << showpoint << setprecision(2);//formating
 cout << "The total is $" << total << endl;//xuat ra man hinh gia tri bien total
 return 0;
}
//programming challenges 7
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  //khai bao va gna gia tri hang thuc 
  const float ADULT_PRICE = 10,
              CHILD_PRICE = 6,
              PROFIT = 0.2;
  string movie;//khai bao bien xau ky tu chua ten phim
  int adultT, childT;//khai bao bien nguyen chua so ve nguoi lon va tre em
  float grossBox, netBox;//khia bao bien thuc grossBos va netBox
  cout << "What was the name of the movie? ";
  getline(cin,movie);//nhap vao gia tri birn movie
  cout << "How many aduld tickers? ";
  cin >> adultT;//nhap vao gia tri bien adultT
  cout << "How many child tickets? ";
  cin >> childT;//nhap vao gia tri bien childT
  grossBox = adultT*ADULT_PRICE + childT*CHILD_PRICE;//gan gia tri cho bien grossBox bang bieu thuc
  netBox = grossBox*PROFIT;//gan gia tri cho bien netBox bang bieu thuc
  cout << setprecision(2) << fixed;//mac dinh co 2 so thap phan sau dau phay 
  cout << "\nMovie Name:" << setw(15) << movie;//xuat ra mna hinh gia tru bien movie
  cout << "\nAdult Tickets Sold:" << setw(15) << adultT;//xuat ra gia tri bien adultT
  cout << "\nChild Tickets Sold:" << setw(15) << childT;//xuat ra gia tri bien childT
  cout << "\nGross Box Office Profit:" << setw(15) << "$" << grossBox;//xuat ra gia tri bien grosssBox
  cout << "\nNet Box Office Profit:" << setw(15) << "$" << netBox;//xuat ra gia tri bien netBox
  cout << "\nAmount Paid To Distributor:" << setw(15) << "$" << grossBox - netBox;//xuat ra gia tri bieu thuc grosssBox - netBox
  return 0; 
}
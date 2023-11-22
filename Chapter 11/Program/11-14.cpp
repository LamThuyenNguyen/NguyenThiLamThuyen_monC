//program 11.14
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //khai bao enum Water gom cac trang thai duoc gan cac gia tri
  enum Water { FREEZING = 32, BOLLING = 212 };
  //khai bao bien nguyen
  int waterTemp;
  cout << "Enter the current water temperature: ";
  //nhap vao gai tri bien waterTemp
  cin >> waterTemp;
  //khoi tao cau dieu kien fi
  //neu dieu kein o if thoa man thi thuc hien cau lenh tiep theo
  if (waterTemp <= FREEZING)
    cout << "The water is frozen.\n";
  //neu dieu kien o else if thoa amn thi thuc hein cau lenh tiep theo
  else if (waterTemp >= BOILING)
    cout << "The water is boiling.\n";
  //neu dieu kieu o if va else if khong thoa man thi thuc hien cau lenh tiep theo
  else
    cout << "The water is not frozen or boiling.\n"; 
  return 0;
}
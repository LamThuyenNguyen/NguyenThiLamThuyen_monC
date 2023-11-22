//program 5.4
#include <iostream>
using namespace std;
int main(){
 const double MAX_TEMP = 102.5;//khai bao hang nguyen
 double temperature;//khai bao bien thuc
 cout << "Enter the substance's Celsius temperature: ";
 cin >> temperature;//nhap vao gia tri bien temperature
 while (temperature > MAX_TEMP){//khoi tao vong lap while, thuc hien cac cau lenh trong {..} neu bieu thuc trong (..) thoa man
   cout << "The temperature is too high. Turn the\n";
   cout << "thermostat down and wait 5 minutes.\n";
   cout << "Then take the Celsius temperature again\n";
   cout << "and enter it here: ";
   cin >> temperature;//nhap vao gia tri temperature
 }
 cout << "The temperature is acceptable.\n";
 cout << "Check it again in 15 minutes.\n";
 return 0;
 }
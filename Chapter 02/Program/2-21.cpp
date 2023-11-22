//program 2.21
 #include <iostream>
 using namespace std;
 int main(){
 double regularWages,//khai bao bien thuc regularWages
 basePayRate = 18.25,//khai bao va gan gia tri cho bien thuc basePayRate
 regularHours = 40.0,
 overtimeWages, //khai bao cho bien thuc overtimeWages
 overtimePayRate = 27.78, //khai bao va gan gia tri cho bien thuc overtimePayRate
 overtimeHours = 10, //khai bao va gan gia tri cho bien thuc overtimeHours
 totalWages; //khai bao bien thuc totLWages
 regularWages = basePayRate * regularHours;//gan gia tri bang cong thuc cho san cho bien thucregularWages
 overtimeWages = overtimePayRate * overtimeHours;//gan gia tri bang cong thuc cho san cho bien overtimeWages
 totalWages = regularWages + overtimeWages;//gan gia tri bang cong thuc cho san cho bien totalWages
 cout << "Wages for this week are $" << totalWages << endl;//xuat ra man hinh gia tri cua bien totalWages
 return 0;
}
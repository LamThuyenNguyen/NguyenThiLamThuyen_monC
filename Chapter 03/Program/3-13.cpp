//program 3.13
 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main(){
  //khai bao va gan gia tri cho cac bien num1-> num9
  int num1 = 2897, num2 = 5, num3 = 837, 
      num4 = 34, num5 = 7, num6 = 1623,
      num7 = 390, num8 = 3456, num9 = 12;
  cout << setw(6) << num1 << setw(6)
       << num2 << setw(6) << num3 << endl;//xuat ra man hinh dong 1, moi gia tri cach nhau 6 khoang cach
  cout << setw(6) << num4 << setw(6)
       << num5 << setw(6) << num6 << endl;//xuat ra man hinh dong 2, moi gia tri cach nhau 6 khoang cach
  cout << setw(6) << num7 << setw(6)
       << num8 << setw(6) << num9 << endl;//xuat ra man hinh dong 3, moi   gia tri cach nhau 6 khoang cach
  return 0;
}
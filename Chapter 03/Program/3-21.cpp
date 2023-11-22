//program 3.20
 #include <iostream>
 using namespace std;
 int main(){
  char ch;//khai bao bien ky tu ch
  cout << "This program has paused. Press Enter to continue.";
  cin.get(ch);//nhap vao bien ch
  cout << "It has paused a second time. Please press Enter again.";
  ch = cin.get();//nhap vao bien ch
  cout << "It has paused a third time. Please press Enter again.";
  cin.get();//nhap vao bien ch
  cout << "Thank you!";
  //may tinh khong cho nhap vao gia tri ch do viec su dung nhieu kieu nhap vao (cin.get(ch), ch = cin.get(ch), cin.get()) lam chuong trinh bi loi
  return 0;
}
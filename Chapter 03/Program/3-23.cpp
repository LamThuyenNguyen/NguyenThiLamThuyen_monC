//program 3.23
 #include <iostream>
 using namespace std;
 int main(){
  char ch;//khai bao bien ky tu ch
  int number;//khai bao bien nguyen number
  cout << "Enter a number: ";
  cin >> number; //nhap vao gia tri bien number
  cin.ignore();//xoa cau lenh xuong dong bi du trong cau lenh cin o tren
  cout << "Enter a character: ";
  ch = cin.get(); //nhap vao gia tri bien ch
  cout << "Thank You!\n";
  return 0;
}
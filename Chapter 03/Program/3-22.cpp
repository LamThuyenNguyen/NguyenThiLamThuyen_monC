//program 3.22
 #include <iostream>
 using namespace std;
 int main(){
  char ch;//khai bao bien ky tu ch
  int number;//khai bao bien nguyen number
  cout << "Enter a number: ";
  cin >> number; //nhap vao gia tri bien number
  cout << "Enter a character: ";
  ch = cin.get(); //nhap vao gia tri bien ch
  cout << "Thank You!\n";
  //chuong trinh khong cho nhap vao gia tri cua bien ch vi cau lenh cin du mot cau len xuong dong lam may tinh hieu do la cau lenh ket thuc nhap cua cau lenh tiep theo, tu do may tinh thuc hien cac cau lenh ke tiep ma khogn cho nhap bien ch
  return 0;
}
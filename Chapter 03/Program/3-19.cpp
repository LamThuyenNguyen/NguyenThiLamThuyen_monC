//program 3.19
 #include <iostream>
 #include <string>
 using namespace std;
 int main(){
  string name;//khai bao bien xau ky tu name
  string city;//khai bao bien xau ky tu city
  cout << "Please enter your name: ";
  getline(cin, name);//nhap vao gia tri bien name
  cout << "Enter the city you live in: ";
  getline(cin, city);//nhap vao gia tri bien city
  cout << "Hello, " << name << endl;//xuat ra man hinh gia tri bien name
  cout << "You live in " << city << endl;//xuat ra man hinh gia tri bien city
  return 0;
}
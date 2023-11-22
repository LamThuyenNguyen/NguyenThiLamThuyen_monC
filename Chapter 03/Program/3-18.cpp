//program 3.18
 #include <iostream>
 #include <string>
 using namespace std;
 int main(){
  string name;//khai bao bien xau ky tu name
  string city;//khai bao bien xau ky tu city
  cout << "Please enter your name: ";
  cin >> name;//nhap vao gia tri bien name
  cout << "Enter the city you live in: ";
  cin >> city;//nhap vao gia tri bien city
  cout << "Hello, " << name << endl;//xuat ra man hinh gia tri bien name
  cout << "You live in " << city << endl;//xuat ra man hinh gia tri bien city
  //man hinh khong cho nhap vao gai tri niem city vi cau len cin bi du mot lenh enter, nen lam may tinh bo qua cau lenh nhap vao city ma thuc hien cau lenh in ra man hinh Hello....
  return 0;
}
//program 3.9
 #include <iostream>
 using namespace std;
 int main(){
  int books;//khai bao bien nguyen books
  int months; //khai bao bien nguyen months
  double perMonth; //khai bao bien thuc per month
  cout << "How many books do you plan to read? ";
  cin >> books;//nhap vao gia tri cua bien nguyen books
  cout << "How many months will it take you to read them? ";
  cin >> months;//nhap vao gia tri bien months
  perMonth = static_cast<double>(books) / months;//gan gia tri cho bien perMonth bang bieu thuc, ep kieu du lieu sang kieu du lieu so thuc cho bein books
  cout << "That is " << perMonth << " books per month.\n";//xuat ra man hinh gia tri bien perMonth
  return 0;
}
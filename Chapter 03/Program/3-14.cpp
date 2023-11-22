//program 3.14
 #include <iostream>
 #include <iomanip>
 #include <string>
 using namespace std;
 int main(){
  int intValue = 3928;//khai bao va gan gia tri cho bien nguyen intValue
  double doubleValue = 91.5;//khai bao va gan gia tri cho bien thuc doubleValue
  string stringValue = "John J. Smith";//khai bao bien xau ky tu stringValue
  cout << "(" << setw(5) << intValue << ")" << endl;//xuat ra man hinh gia tri bien intValue cach 5 khoang cach tu chu so cuoi cung cua intValue
  cout << "(" << setw(8) << doubleValue << ")" << endl;//xuat ra man hinh gia tri bien intValue cach 8 khoang cach tu chu so cuoi cung cua doubleValue
  cout << "(" << setw(16) << stringValue << ")" << endl;//xuat ra man hinh gia tri bien intValue cach 16 khoang cach tu chu cai cuoi cung cua stringValue
  return 0;
}
//program 2.22
 #include <iostream>
 using namespace std;
 int main(){
 double monthlyPay = 6000.0, contribution;//khai bao va gan gia tri bien thuc monthlyPay, khai bao bien thuc contribution
 contribution = monthlyPay * 0.05;//gan gia tri cho bien contribution bang cong thuc cho san
 cout << "5 percent is $" << contribution << " per month.\n";//xuat ra man hinh gia tri bien conttribution
 contribution = monthlyPay * 0.07;//gan gia tri cho bien contribution bang cong thuc khac
 cout << "7 percent is $" << contribution << " per month.\n";//xuat ra man hinh gia tri bien conttribution
 contribution = monthlyPay * 0.1;//gan gia tri cho bien contribution bang cong thuc khac
 cout << "10 percent is $" << contribution << " per month.\n";//xuat ra man hinh gia tri bien conttribution
 return 0;
}
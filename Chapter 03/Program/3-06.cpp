//program 3.6
 #include <iostream>
 using namespace std;
 int main(){
  double test1, test2, test3;//khai bao bien thuc test1, test2, test3
  double average;//khai bao bien thuc average
  cout << "Enter the first test score: ";
  cin >> test1;//nhap vao gia tri bien test1
  cout << "Enter the second test score: ";
  cin >> test2;//nhap vao gia tri bien test1
  cout << "Enter the third test score: ";
  cin >> test3;//nhap vao gia tri bien test1
  average = (test1 + test2 + test3) / 3.0;//gan gia tri cho bien average bang cong thuc
  cout << "The average score is: " << average << endl;//xuat ra man hinh gia tri bien average
  return 0;
}
//programming challenges 17
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  //khai bao hang thuc
  const int MIN_VALUE = 100,
            MAX_VALUE = 1000;
  //khai bao bien nguyen chua cac so va ket qua
  int num1, num2, answer;
  unsigned seed = time(0);//ma dinh thoi gian tren he thong
  srand (seed);//tao he so ngau nhien
  cout << endl;
  //gan gia tri tinh num1 va num2
  num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
  num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
  answer = num1 + num2;//gan gai tri cho bien answer
  cout << num1 << " + " << num2 << " = ?" << endl;
  cout << "Solution: ";
  cin.get();//cho phep nhap
  cout << endl;
  cout << num1 << " + " << num2 << " = " << answer;//xuat ra man hinh gia tri
  return 0;
}

        
 
//program 3.7
 #include <iostream>
 using namespace std;
 int main(){
  short testVar = 32767;//khai bao bien testVar
  cout << testVar << endl;//xuat ra gia tri bien testVar
  testVar = testVar + 1;//cong 1 don vi cho bien testVar
  cout << testVar << endl;//xuat ra man hinh gia tri bien testvar sau khi da them 1 don vi
  testVar = testVar - 1;//tru 1 don vi cua bien testVar
  cout << testVar << endl;//xuat ra amn hinh gia tri sau khi da bot 1 don vi
  return 0;
}
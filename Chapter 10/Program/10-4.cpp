//program 10.4
#include <iostream>
#include <cctype>
using namespace std;
int main(){
  //khai bao bien ky tu again
  char again;
  //khoi tao vong lap do whilw
  do
  {
    cout << "C++ programming is great fun!" << endl;
    cout << "Do you want to see the message again? ";
    //nhap vao bien again
    cin >> again;
  } while (again == 'Y' || again == 'y');//lap lai vong lap khi dieu kien thoa man
  return 0;
}
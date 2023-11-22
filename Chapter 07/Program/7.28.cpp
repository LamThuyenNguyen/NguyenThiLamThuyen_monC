//program 7.28
#include <iostream>
#include <vector>
using namespace std;
void showValues(vector<int>);
 
int main(){
  vector<int> values;//khai bao vector nguyen values
  for (int count = 0; count < 7; count++)//khoi tao vong lap gan mot day so vao vector values
     values.push_back(count * 2);
  showValues(values);//truyen vao ham showValues gia tri values
  return 0;
}
void showValues(vector<int> vect){//khoi tao ham showValue xuat ra cac phan tu trong vector
  for (int count = 0; count < vect.size(); count++)
  cout << vect[count] << endl;
}

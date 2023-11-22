//program 7.25
#include <iostream>
#include <vector>
using namespace std;

int main(){
 vector<int> numbers { 10, 20, 30, 40, 50 };//khai bao vector nguyen gom 5 phan tu
 cout << "Here are the values you entered:\n";
 for (int val : numbers)//duyet vong lap xuat ra cac phan tu cua vector numbers
   cout << val << endl;
 return 0;
}
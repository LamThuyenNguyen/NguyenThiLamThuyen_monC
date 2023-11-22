//program 7.30
#include <iostream>
#include <vector>
using namespace std;

int main(){
 vector<int> values(100);//khoi tao vector nguyen values gom 100mphan tu
 cout << "The values vector has " << values.size() << " elements.\n";//xuat ra so phan tu cua vector values
 cout << "I will call the clear member function...\n";
 values.clear();//xoa tat ca phan tu trong vector 
 cout << "Now, the values vector has " << values.size() << " elements.\n";//xuat ra so phan tu cua vector sau khi da xoa
 return 0;
}

//program 7.29
#include <iostream>
#include <vector>
using namespace std;

int main(){
 vector<int> values;//khai bao vector nguyen values
 int index; //khai bao bien nguyen 
 values.push_back(1);//day phan tu '1' vao vecto values
 values.push_back(2);//day phan tu '2' vao vecto values
 values.push_back(3);//day phan tu '3' vao vecto values
 cout << "The size of values is " << values.size() << endl;//xuat ra so phan tu cua vector values
 cout << "Popping a value from the vector...\n";
 values.pop_back();//xoa phan tu cuoi va giam so phan tu cua vector
 cout << "The size of values is now " << values.size() << endl;//xuat ra so phan tu cua vector values (2)
 values.pop_back();//xoa phan tu cuoi va giam so phan tu cua vector
 cout << "Popping a value from the vector...\n";
 cout << "The size of values is now " << values.size() << endl;//xuat ra so phan tu cua vector values (1)
 values.pop_back();//xoa phan tu cuoi va giam so phan tu cua vector
 cout << "Popping a value from the vector...\n";
 cout << "The size of values is now " << values.size() << endl;//xuat ra so phan tu cua vector values (0)
 return 0;
}
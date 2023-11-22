//program 3.25
#include <iostream>
#include <cstdlib>//de su dung rand
#include <ctime> //de su dung cai dat thoi gian tren he thong
using namespace std;
int main(){
 unsigned seed = time(0);//cai dat thoi gian tren he thong
 srand(seed);//tao trinh tao so ngau nhien
 //xuat ra man hinh cac so duoc tao ra
 cout << rand() << endl;
 cout << rand() << endl;
 cout << rand() << endl;
 return 0;
}
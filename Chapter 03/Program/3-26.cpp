//program 3.26
#include <iostream>
#include <cstdlib>//de su dung rand
#include <ctime> //de su dung cai dat thoi gian tren he thong
using namespace std;
int main(){
 const int MIN_VALUE = 1;//khai bao hang chua gia tri MIN
 const int MAX_VALUE = 6;//khai bao hang nguyen chua gia tri Max
 int die1;//khai bao bien nguyen die1
 int die2; //khai bao bien nguyen die2
 unsigned seed = time(0);//cai dat thoi gian tren he thong
 srand(seed);//trinh tao so ngau nhien 
 cout << "Rolling the dice...\n";
 //gan gia tri bang bieu thuc cho die1, die2
 die1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
 die2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
 //xuat ra man hinh gia tri cac bien die1, die2
 cout << die1 << endl;
 cout << die2 << endl;
 return 0;
}
//program 7.8
#include <bits/stdc++.h>
using namespace std;

int main(){
 const int NUM_LETTERS = 10;//khoi tao gia tri cua mang letters
 char letters[NUM_LETTERS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};//khai bao mang ky tu letters gom NUM_LETTERS phan tu duoc gan gia tri theo thu tu
 cout << "Character" << "\t" << "ASCII Code\n";
 cout << "---------" << "\t" << "----------\n";
 for (int count = 0; count < NUM_LETTERS; count++){//khoi tao vong lap xuat ra gia tri cua thi ohan tu
 cout << letters[count] << "\t\t";
 cout << static_cast<int>(letters[count]) << endl;//ep lieu nguyen cho mang letters count
 }
 return 0;
}
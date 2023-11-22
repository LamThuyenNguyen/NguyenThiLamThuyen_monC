//program 7.7
#include <bits/stdc++.h>
using namespace std;

int main(){
 const int SIZE = 9;//khoi tao so luong phan tu cho mang planets
 string planets[SIZE] = { "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto (a dwarf planet)" };
 cout << "Here are the planets:\n";//khoi tao mang xau ky tu planets gom SIZE phan tu va duoc gan gia tri theo thu tu
 for (int count = 0; count < SIZE; count++)//khoi tao vong lap xuat ra gai tri cua cac phan tu trong mang
 cout << planets[count] << endl;
 return 0;
}
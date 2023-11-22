//program 7.5
#include <bits/stdc++.h>
using namespace std;

int main(){
 const int SIZE = 3; //khoi tao so luong phan tu cua mang values
 int values[SIZE]; //khoi tao mang nguyen values gom SIZE phan tu
 int count; 
 cout << "I will store 5 numbers in a 3-element array!\n";
 for (count = 0; count < 5; count++)//khoi tao vong lap de nhap vao gia tri cua cac phan tu trong mang
 values[count] = 100;//cho phan tu thu count cua mang values bang 100
 cout << "If you see this message, it means the program\n";
 cout << "has not crashed! Here are the numbers:\n";
 for (count = 0; count < 5; count++)//xuat ra man hinh gia tri bien count
 //vi ta khoi tao gia tri bien count trong vong lap <5 nhung mang values chi co 3 phan tu nen khi xuat ra mang hinh bi loi
 cout << values[count] << endl;
  return 0;
}
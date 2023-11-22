//challenges 1
#include <iostream>
using namespace std;

int main(){
 int a[10];//khai bao mang a gom 10 phan tu
    for (int i = 0; i < 10; ++i)//khoi tao vong lap de nhap vao gia tri cua tung phan tu
        cin >> a[i];
    int min = a[0], max = a[0];//gan gia tri min va max cho phan tu 0 trong mang a
    for (int i = 0; i < 10; ++i){//khoi tao vong lap de xet tung phan tu tim ra min va max
        if (a[i] < min )//neu co gia tri khac nho hon min thi min bang gia tri phan tu do
            min = a[i];
        if (a[i] > max )//neu co gia tri khac nho hon min thi min bang gia tri phan tu do
            max = a[i]; 
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
 return 0;
}
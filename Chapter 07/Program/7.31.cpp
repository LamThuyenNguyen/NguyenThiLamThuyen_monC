//program 7.31
#include <iostream>
#include <vector>
using namespace std;
double avgVector(vector<int>);

int main(){
 vector<int> values;//khoi tao vector nguyen values
 int numValues; //khai bao bien nguyen numValues de chua so phan tu trong vector
 double average;//khai bao bien thuc chua gia tri trung binh
 cout << "How many values do you wish to average? ";
 cin >> numValues;//nhap vao gia tri bien nguyen numValues
//khoi tao vong lap de nhap vao cac phan tu trong values
 for (int count = 0; count < numValues; count++){
 int tempValue;
 cout << "Enter a value: ";
 cin >> tempValue;//nhap vao gia tri cua phan tu trong vector values
 values.push_back(tempValue);//day gia tri cua bien tempValue vao vector
 }
average = avgVector(values);//truyen values vao ham avgvector vagan gai tri thu duoc cho bien average
 cout << "Average: " << average << endl;//xuat ra gia tri bien average
 return 0;
}
double avgVector(vector<int> vect){//khoi tao ham thuc avgVector voi vector nguyen
  int total = 0; //khai bao va gan gia tri cua bien total 
  double avg; //khai bao bien chua gia tri trung binh
  if (vect.empty()){ //neu vector trong thi xuat ra man hinh
   cout << "No values to average.\n";
   avg = 0.0;
  }
  else{//neu khong thi thuc hien cac cau lenh
   for (int count = 0; count < vect.size(); count++)//khoi tao vong lap
   total += vect[count];//cong va gangia tri phan tu thu count vao total
   avg = total / vect.size();//gan gia tri cho bien avg
  }
 return avg;
}
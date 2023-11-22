//program 4.27
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 int choice;//khai bao bien nguyen choice
 int months;// khai bao bien nguyen months
 double charges;//khai bao bien thuc charges
 //khai bao hang thuc
 const double ADULT = 40.0,
              CHILD = 20.0,
              SENIOR = 30.0;
 //khai bao hang nguyen
 const int ADULT_CHOICE = 1,
           CHILD_CHOICE = 2,
           SENIOR_CHOICE = 3,
           QUIT_CHOICE = 4;
 cout << "\t\tHealth Club Membership Menu\n\n"
      << "1. Standard Adult Membership\n"
      << "2. Child Membership\n"
      << "3. Senior Citizen Membership\n"
      << "4. Quit the Program\n\n"
      << "Enter your choice: ";
 cin >> choice;//nhap vao gia tri bien choice
 cout << fixed << showpoint << setprecision(2);//formating
 switch (choice){//su dung cau dieu kien switch de chia truong hop cho bien choice
    case ADULT_CHOICE://neu bien choice thuoc turong hop ADULT_CHOICE
          cout << "For how many months? ";
          cin >> months;//nhap vao gia tri bien months
          charges = months * ADULT;//gan gia tri cho bien charges
          cout << "The total charges are $" << charges << endl;//xuat ra gia tri bien charges
          break;//dung lenh switch
    case CHILD_CHOICE://neu bien choice thuoc truong hop CHILD_CHOICE
          cout << "For how many months? ";
          cin >> months;//nhap vao gia tri bien months
          charges = months * CHILD;//gan gia tri cho bien charges bang bieu thuc
          cout << "The total charges are $" << charges << endl;//xuat ra gia tri bien charges
          break;//dung lenh switch
    case SENIOR_CHOICE://neu bien choice thuoc truong hop SENIOR_CHOICE
          cout << "For how many months? ";
          cin >> months;//nhap vao gia tri bien months
          charges = months * SENIOR;//gan gia tri cho bien charges bang bieu thuc
          cout << "The total charges are $" << charges << endl;//xuat ra gia tri bien charges
          break;//dung lenh switch
    case QUIT_CHOICE://neu bien choice thuoc truong hop QUIT_CHOICE
          cout << "Program ending.\n";
          break;//dung lenh switch
    default://neu bien choice khong thuoc truong hop nao trong cac truong hop tren thuoc 
          cout << "The valid choices are 1 through 4. Run the\n"
               << "program again and select one of those.\n";
 }
 return 0;
}
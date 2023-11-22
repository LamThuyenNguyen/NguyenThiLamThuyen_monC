//program 5.7
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 //khai bao hang nguyen
 const int ADULT_CHOICE = 1,
           CHILD_CHOICE = 2,
           SENIOR_CHOICE = 3,
           QUIT_CHOICE = 4;
 //khai bao hang thuc
 const double ADULT = 40.0,
              CHILD = 20.0,
              SENIOR = 30.0;
 int choice;//khai bao bien nguyen chua lua chon cua menu
 int months;//khai bao bien nguyen gia tri thang
 double charges; //khai bao bien thuc chua gia tri chi phi hang thang
 cout << fixed << showpoint << setprecision(2);//fomating
 //khoi tao vong lap do while
 do
 {
   cout << "\n\t\tHealth Club Membership Menu\n\n"
        << "1. Standard Adult Membership\n"
        << "2. Child Membership\n"
        << "3. Senior Citizen Membership\n"
        << "4. Quit the Program\n\n"
        << "Enter your choice: ";
   cin >> choice;//nhap vao gia tri bien choice
    while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)//khi bieu thuc trong ngoac dung thuc hien cau lenh trong ngoac {..}
    {
      cout << "Please enter a valid menu choice: ";
      cin >> choice;
    }
    if (choice != QUIT_CHOICE)//neu bieu thuc trong trong ngoac dung thuc hien cac cau lenh sau
    {
      cout << "For how many months? ";
      cin >> months;
      switch (choice)//su dung cua dieu kien switch case de chia truogn hop cho bien choice, choice thuoc truong hop nao thi thuc hien cua lenh o case day
      {
        case ADULT_CHOICE:
             charges = months * ADULT;
             break;
        case CHILD_CHOICE:
             charges = months * CHILD;
             break;
        case SENIOR_CHOICE:
             charges = months * SENIOR;
      }
    cout << "The total charges are $"
         << charges << endl;//xuat ra man hinh gia tri bien charges
    }
 } while (choice != QUIT_CHOICE);//lap lai khi dieu kien torng ngoac thoa man 
 return 0;
}
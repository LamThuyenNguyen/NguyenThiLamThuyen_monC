//program 4.18
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 //khai bao bien nguyen
 int choice; 
 int months;
 double charges;//khai bao bien thuc
 //khai bao hang thuc
 const double ADULT  = 40.0,
              SENIOR = 30.0,
              CHILD  = 20.0;
 //khai bao hang nguyen
 const int ADULT_CHOICE  = 1,
           CHILD_CHOICE  = 2,
           SENIOR_CHOICE = 3,
           QUIT_CHOICE   = 4;
 cout << "\t\tHealth Club Membership Menu\n\n"
      << "1. Standard Adult Membership\n"
      << "2. Child Membership\n"
      << "3. Senior Citizen Membership\n"
      << "4. Quit the Program\n\n"
      << "Enter your choice: ";
 cin >> choice;//nhap vao gia tri bien choice
 cout << fixed << showpoint << setprecision(2);//formating
 if (choice == ADULT_CHOICE){//khoi tao cau dieu kien if, neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac {..}
   cout << "For how many months? ";
   cin >> months;//nhap vao gia tri bien months
   charges = months * ADULT;//gan gai tri cho bien charges bang bieu thuc
   cout << "The total charges are $" << charges << endl;//xuat ra man hinh gia tri bien charges
 }
 else if (choice == CHILD_CHOICE){//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac kep {..}
   cout << "For how many months? ";
   cin >> months;//nhap vao gia tri bien months
   charges = months * CHILD;//gan gai tri cho bien charges bang bieu thuc
   cout << "The total charges are $" << charges << endl;//xuat ra man hinh gia tri bien charges
 }
 else if (choice == SENIOR_CHOICE){//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac kep {..}
   cout << "For how many months? ";
   cin >> months;//nhap vao gia tri bien months
   charges = months * SENIOR;//gan gai tri cho bien charges bang bieu thuc
   cout << "The total charges are $" << charges << endl;
 }
 else if (choice == QUIT_CHOICE){//neu bieu thuc trong ngoac dung thi thuc hien cac cau lenh trong ngoac kep {..}
   cout << "Program ending.\n";
 }
 else{//neu cac bieu thuc deu sai thi thuc hien cac cau lenh trong ngoac kep {..}
   cout << "The valid choices are 1 through 4. Run the\n"
        << "program again and select one of those.\n";
 }
 return 0;
}
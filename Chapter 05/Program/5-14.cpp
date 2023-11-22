//program 5.14
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 //khai bao bien nguyen
 int numStudents,
     numTests;
 //khai bao bien thuc
 double total,
        average;
 //formating
 cout << fixed << showpoint << setprecision(1);
 cout << "This program averages test scores.\n";
 cout << "For how many students do you have scores? ";
 cin >> numStudents;//nhap vao gia tri bien numStudents
 cout << "How many test scores does each student have? ";
 cin >> numTests;//nhap vaop gia tri bien numTests
//khoi tao vong lap for duyet cac gia tri cua bien student
 for (int student = 1; student <= numStudents; student++)
 {
  total = 0;//cho gia tri bien total bang 0
  //khoi tao vong lap duyet tung gia tri bien score
  for (int test = 1; test <= numTests; test++)
  {
    double score;
    cout << "Enter score " << test << " for ";
    cout << "student " << student << ": ";
    cin >> score;//nhap vao gai tri bien score
    total += score;//cong don vao bien total
  }
 average = total / numTests;//gan gia tri cho bien average bang bieu thuc
 //xuat ra amn hinh gia tri bien student va bien average
 cout << "The average score for student " << student;
 cout << " is " << average << ".\n\n";
 }
 return 0;
}
//programming challenges 19
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
  //khai bao hang
  const int ONE              = 1,
            HUNDRED          = 100,
            NUMBER_OF_MONTHS = 12;
  int n;//khai bao bien nguyen
  //khai bao bien thuc
  float rate,
        l,
        payment,
        amountPaid,
        interestPaid;
  cout << endl;
  cout << "Interest rate of Lan (%): ";
  cin >> rate;//nhap vao gia tri bien rate 
  cout << "Amount of Lan: ";
  cin >> l;//nhap vao gia tri bien l
  cout << "Number of payment: ";
  cin >> n;//nhap vao gia tri bien n
  //gan gai tri cho bien rate bang beiu thuc
  rate /= NUMBER_OF_MONTHS;
  rate /= HUNDRED;//ex: 4.25% = 0.0425
  payment = ((rate) * pow(ONE + (rate), n) / (pow(ONE + (rate), n) - ONE)) * l;
  rate *= HUNDRED;//ex: 0.0425 = 4.25
  //gan gia tri  cho bien amountPaid va bien interestPaid bang bieu thuc
  amountPaid = n * payment;
  interestPaid = (n * payment) - l;
  cout << setprecision(2) << fixed << right << endl;//formating
  //xuat ra man hinh gia tri cua cac bien, can le 10 khoang cach
  cout << "Loan amount ($):             " << setw(10) << l << endl;
  cout << "Monthly interest rate:       " << setw(10) << rate << "%" << endl;
  cout << "Number of payment:           " << setw(10) << n << endl;
  cout << "Monthly payment:            $" << setw(10) << payment << endl;
  cout << "Amount paid back:           $" << setw(10) << amountPaid << endl;
  cout << "Interest paid:              $" << setw(10) << interestPaid << endl;
  return 0;
}

        
 
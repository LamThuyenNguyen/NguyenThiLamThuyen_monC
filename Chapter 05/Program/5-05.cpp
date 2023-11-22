//program 5.4
#include <iostream>
using namespace std;
int main(){
  //khai bao hang nguyen
 const int MIN_PLAYERS = 9,
           MAX_PLAYERS = 15;
 //khai bao bien nguyen
 int players, 
     teamPlayers,
     numTeams,
     leftOver; 
 cout << "How many players do you wish per team? ";
 cin >> teamPlayers;//nhap vao gia tri bien teamPlayer
 while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS){//khoi tao vong lap while, thuc hien cac cau lenh trong {..} neu bieu thuc trong (..) thoa man
   cout << "You should have at least " << MIN_PLAYERS//xuat ra gai tri hang MIN_PLAYER
        << " but no more than " << MAX_PLAYERS << " per team.\n";//xuat ra gia tri ham MIN_PLAYER
   cout << "How many players do you wish per team? ";
   cin >> teamPlayers;//nhap vao gia tri bien teamPlayer
 }
 cout << "How many players are available? ";
 cin >> players;//nhap vao gia tri bien player
 while (players <= 0){//khoi tao vong lap while, thuc hien cac cau lenh trong {..} neu player <= 0
   cout << "Please enter 0 or greater: ";
   cin >> players;//nhap vao gia tri bien player
 }
 //gan gai tri cho bien numTearms va leftOver bang bieu thuc
 numTeams = players / teamPlayers;
 leftOver = players % teamPlayers;
 //xuat ra man hinh gia tri cac bien
 cout << "There will be " << numTeams << " teams with "
      << leftOver << " players left over.\n";
 return 0;
}
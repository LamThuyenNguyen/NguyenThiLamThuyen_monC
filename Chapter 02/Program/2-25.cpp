//program 2.24
 #include <iostream>
 using namespace std;
 int main(){
 int totalSeconds = 125;//khai ba va gan gia tri cho bien nguyen totalSeconds
 int minutes, seconds;//khai bao bien nguyen minutes va seconds
 //gna gia tri bang cong thuc cho bien nguyen minutes va bien nguyen seconds
 minutes = totalSeconds / 60;
 seconds = totalSeconds % 60;
 //xuat ra man hinh gia tri cua cac bien
 cout << totalSeconds << " seconds is equivalent to:\n";
 cout << "Minutes: " << minutes << endl;
 cout << "Seconds: " << seconds << endl;
 //vi ta khai bao bien number va bien rightMost la bien nguyen nen ket qua chi xuat ra duoc gia tri nguyen 
 return 0;
}
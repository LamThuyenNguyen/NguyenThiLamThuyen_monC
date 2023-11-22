//program 12.03
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
 fstream dataFile;
 double num = 17.816392;
 dataFile.open("numfile.txt", ios::out);//mo che do dau ra
 dataFile << fixed;//formating
 dataFile << num << endl;//ghi vao file
 dataFile << setprecision(4);//dinh dang cho 4 chu so thap phan
 dataFile << num << endl;//ghi vao file
 dataFile << setprecision(3);//dinh dang cho 3 chu so thap phan
 dataFile << num << endl;//ghi vao file
 dataFile << setprecision(2);//dinh dang cho 2 chu so thap phan
 dataFile << num << endl;//ghi vao file
 dataFile << setprecision(1);//dinh dang cho 1 chu so thap phan
 dataFile << num << endl;//ghi vao file
 cout << "Done.\n";
 dataFile.close();//dong file
 return 0;
}

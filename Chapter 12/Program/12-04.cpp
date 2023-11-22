//program 12.04
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
 //khai bao hang
 const int ROWS = 3;
 const int COLS = 3; 
 //khia bao mang nguyen nums co so dong = ROWS, so cot = COLS
 int nums[ROWS][COLS] = { 2897, 5, 837,
                          34, 7, 1623,
                         390, 3456, 12 };
 fstream outFile("table.txt", ios::out);
 //khoi tao vong lap viet vao cac phan tu cua mang, moi phan tu cach nhau 8 khoang trang
 for (int row = 0; row < ROWS; row++)
 {
    for (int col = 0; col < COLS; col++)
    {
      outFile << setw(8) << nums[row][col];
    }
    outFile << endl;
 }
 outFile.close();//dong file
 cout << "Done.\n";
 return 0;
}

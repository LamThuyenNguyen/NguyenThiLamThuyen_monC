//program 12.02
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 ofstream dataFile;//tao tep va ghi du lieu vao tep
 dataFile.open("demofile.txt", ios::out);
 cout << "Now writing data to the file.\n";
 dataFile << "Jones\n";//ghi dong 1
 dataFile << "Smith\n";//ghi dong 2
 cout << "Now closing the file.\n";
 dataFile.close();//dong tep
 cout << "Opening the file again...\n";
 dataFile.open("demofile.txt", ios::out | ios::app);//mo tep o che do viet them
 cout << "Writing more data to the file.\n";
 dataFile << "Willis\n";//ghi dong 3
 dataFile << "Davis\n";//ghi dong 4
 cout << "Now closing the file.\n";
 dataFile.close();//dong tep
 return 0;

}

//program 12.01
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  fstream dataFile;
  cout << "Opening file...\n";
  dataFile.open("demofile.txt", ios::out);//mo tep de ghi
  cout << "Now writing data to the file.\n";
  //ghi vao tep
  dataFile << "Jones\n";
  dataFile << "Smith\n";
  dataFile << "Willis\n";
  dataFile << "Davis\n";
  dataFile.close();//dong tep
  cout << "Done.\n";
  return 0;

}

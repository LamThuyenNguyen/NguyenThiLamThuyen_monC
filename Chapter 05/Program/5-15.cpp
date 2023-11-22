//program 5.15
#include <iostream>
#include <fstream>//thu vien de su dung ofstream
using namespace std;
int main(){
 ofstream outputFile;
 //mo file
 outputFile.open("demofile.txt");
 cout << "Now writing data to the file.\n";
 //ghi vao file
 outputFile << "Bach\n";
 outputFile << "Beethoven\n";
 outputFile << "Mozart\n";
 outputFile << "Schubert\n";
 //dong file lai
 outputFile.close();
 cout << "Done.\n";
 return 0;
}
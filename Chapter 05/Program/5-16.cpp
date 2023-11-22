//program 5.16
#include <iostream>
#include <fstream>//thu vien de su dung ofstream
using namespace std;
int main(){
 ofstream outputFile;
 //mo file
 outputFile.open("demofile.txt");
 cout << "Now writing data to the file.\n";
 //ghi vao file
 outputFile << "Bach";
 outputFile << "Beethoven";
 outputFile << "Mozart";
 outputFile << "Schubert";
 //dong file da ghi 
 outputFile.close();
 cout << "Done.\n";
 return 0;
}
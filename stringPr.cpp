#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){

string name, fileN;
ifstream inputFile;

cout <<"Enter a file to open and read from";
cin >> fileN; 

inputFile.open(fileN);
if (!inputFile)
{
    cout <<"File not found: " << endl;
    exit(-1);
}

cout <<" Contanst of file: " << endl;
string lines;
while (inputFile >> lines)
{
    cout << lines << endl;
}
inputFile.close();
return 0;
















}
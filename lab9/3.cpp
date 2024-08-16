// wap for writing and reading of user input to file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream outputfile;
    ifstream inputfile;
    string inputtext;
    cout << "Enter some text: ";
    getline(cin, inputtext);
    outputfile.open("Myfile.txt");
    if (!outputfile.is_open())
    {
        cout << "Failed to open file." << endl;
        return 1;
    }
    outputfile << inputtext << endl;
    outputfile.close();
    inputfile.open("MYfile.txt");
    if (!inputfile.is_open())
    {
        cout << "Failed to open file." << endl;
        return 1;
    }
    string getcontent;
    getline(inputfile, getcontent);
    cout << "The content in file is: " << getcontent << endl;
    inputfile.close();
    return 0;
}
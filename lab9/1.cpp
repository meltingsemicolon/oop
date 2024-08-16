// Wap for writing to disk file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outputfile("Myfile.txt");
    if(!outputfile.is_open())
    {
        cout<<"Failed to open file."<<endl;
        return 1;
    }
    string usertext;
    cout<<"Enter text for saving to file: ";
    getline(cin,usertext);
    outputfile <<usertext<<endl;
    outputfile.close();
    cout<<"Writing sucessful.";
    return 0;
}
// wap for reading from disk file
#include <iostream>
#include <fstream>
#include <string>
// #include <thread>
// #include <chrono>
using namespace std;

int main()
{
    ifstream inputfile("Myfile.txt");
    if(!inputfile.is_open())
    {
        cout<<"Failed to open file."<<endl;
        return 1;
    }
    string line;
    char ch;
    while(getline(inputfile,line))
    {
        cout << line << endl;
    //    for (char ch : line)
    //     {
    //         cout << ch << flush;
    //         std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Delay of 50 milliseconds between each character
    //     }
    }
    inputfile.close();
    return 0;
}
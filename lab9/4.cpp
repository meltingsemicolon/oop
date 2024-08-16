// illuatration of File i/o with fstream class
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream fout("Myfile.txt",ios::out);
    if (fout.is_open())
    {
        fout<<"hello world"<<endl;
        fout.close();
        cout<<"Data is written\n";
    }else {
        cout<<"!!! ERROR opening !!!";
    }
    fstream fin("Myfile.txt",ios::in);
     if (fin.is_open())
    {
     string line;
     cout<<"Reading data... \n";
     while(getline(fin,line))
     {
        cout<<line<<endl;
     }
     fin.close();
    }
    else{
        cout<<"!!! Error reading !!!";
    }
}
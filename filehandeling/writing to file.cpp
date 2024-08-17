#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    fstream fout;
    int i;
    char name[20]="Abhishek";
    fout.open("students.in",ios::out);
    fout<<name;
    fout.close();
} 
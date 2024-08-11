// WAP to demonstrate Inline function.
#include <iostream>
using namespace std;

inline int python()
{
   return 42;
}

int main()
{
   int result = python();
   cout << "The result is: " << result << endl;
   return 0;
}
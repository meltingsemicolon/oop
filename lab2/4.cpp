// WAP showing an example of a function  pointer.
#include <iostream>
using namespace std;
int factorial(int n)
{
    int result = 1;

    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    int (*fptr)(int);
    cout << "Enter the number: ";
    cin >> n;
    fptr = factorial;
    int ft;
    ft = (*fptr)(n);
    cout << "The factorial of " << n << " is: " << ft << endl;
    return 0;
}

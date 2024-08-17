// Illustration of exception class
#include <iostream>
#include <cmath>
using namespace std;
    class Num
    {
        double n;
        public:
        class prime{};
        void getN()
        {
            cin>>n;
        }
        bool isPrime()
        {
            if(n<=1)
            {
                return false;
            }
            for(int i=2;i<=sqrt(n);i++)
            {
                if(fmod(n,i)==0)
                {
                    return false;
                }
            }
            return true;
        }
    };
    int main()
{
    Num num;
    num.getN();

    try {
        if (num.isPrime()) {
            cout << "The number is prime." << endl;
        } else {
            cout << "The number is not prime." << endl;
        }
    } catch (Num::prime) {
        cout << "Invalid input. The number must be a positive real number." << endl;
    }

    return 0;
}


//wap to convert data from basic to userdefined data types.
#include <iostream>
using namespace std;

class length {
    private:
    int foot;
    int inch;
    public:
    length(){foot=0,inch=0;}
    length(float len)
    {
        foot = int(len);
        inch = (len-int(len))*100;
    }
    void show()
    {
        cout<<foot<<"foot,"<<inch<<"inch" <<endl;
    }
};
int main() {
    float ln;

    cout << "Enter the distance: ";
    cin >> ln;

    length d(ln);
    d.show();

    return 0;
}

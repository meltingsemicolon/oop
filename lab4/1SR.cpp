#include <iostream>
using namespace std;
class Time{
    private:
    int hour,min, sec;
    public:
    void getTime()
    {
        cout<<"enter time in hr:min:sec "<<endl;
        cin>>hour>>min>>sec;
    }
      void putTime()
    {
        cout<<hour<<':'<<min<<':'<<sec;
    }
    void sum(Time t1,Time t2);
};
    void Time::sum(Time t1, Time t2)
    {
        sec=t1.sec+t2.sec;
        min=sec/60;
        sec=sec%60;
        min+=t1.min+t2.min;
        hour=min/60;
        min=min%60;
        hour+=t1.hour+t2.hour;
    }
int main(){
    Time t1,t2,t3;
    cout<<"Gettting time"<<endl;
    t1.getTime();
    t2.getTime();
    cout<<"calculating sum"<<endl;
    t3.sum(t1,t2);
    cout<<"displaying details:"<<endl;
    t1.putTime();
    cout<<"+";
    t2.putTime();
    cout<<"=";
    t3.putTime();
    return 0;
}
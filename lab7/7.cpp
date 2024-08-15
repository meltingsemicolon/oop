//User defined to user defined Conversion routine in source object.
#include<iostream>
using namespace std;
class Inches;
class Feet 
{
	private:
    	int feet;
	public:
    	Feet(int f) : feet(f) {}
    operator Inches() const;
};
class Inches 
{
	private:
    	int inches;
	public:
    	Inches(int i) : inches(i) {}
    void showInches() 
	{
        cout << inches << " inches" << endl;
    }
};
Feet::operator Inches() const 
{
    int totalInches = feet * 12;
    return Inches(totalInches);
}
int main() 
{
    int feetValue;
    cout << "Enter feet value: ";
    cin >> feetValue;
    Feet feet(feetValue);
    Inches inches = feet; 
    cout << "Inches converted from Feet: ";
    inches.showInches();
    return 0;
}

// User defined to user defined Conversion routine in destination object
#include <iostream>
using namespace std;
class Inches;
class Feet 
{
	private:
    	int feet;
	public:
    	Feet(int f) : feet(f) {}
    	int getFeet() const 
		{
        	return feet;
    	}
};
class Inches 
	{
		private:
    		int inches;
		public:
    		Inches(int i) : inches(i) {}
    	Inches(const Feet& feetObj) 
		{
        	inches = feetObj.getFeet() * 12;
    	}
    void showInches() 
	{
        cout << inches << " inches" << endl;
    }
};
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
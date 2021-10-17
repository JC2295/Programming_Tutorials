#include <iostream>
#include <string> 

using namespace std;

class Jclass {
    public:
        Jclass(string y)
        {
            setName(y);
        } 
        void setName(string x) // Use functions in public sections of classes to acess variables. Use and get and set methods.
        {
            name = x;
        }
        string getName(void)
        {
            return name;
        }
    private:    // Always encapsulate variables in private sections of classes to prevent accidental tampering.
        string name;
};

int main()
{
    Jclass jo("Jonathan Copeland");

    cout << jo.getName() << endl;

    return 0;
}
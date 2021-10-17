#include<iostream>

using namespace std;

class Jclass
{
    public:
        void saying()
        {
            cout << "Coolio\n";
        }
};

int main()
{
    Jclass Jobject;

    Jobject.saying();

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    float F, m, a;

    cout << "Enter Mass (Kg): "; 
    cin >> m;
    cout << "Enter Acceleration (m/s^2): ";
    cin >> a;

    F = m * a;

    cout << "Force: "<< F << "N";

}
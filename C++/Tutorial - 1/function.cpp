#include<iostream>

using namespace std;

int sum(int x, int y);

int main()
{
    int a, b;

    cout << "Enter number: ";
    cin >> a;

    cout << "Enter a second number: ";
    cin >> b;

    cout << sum(a, b) << endl;

    return 0;
}

int sum(int x, int y)
{
    return x + y;
}
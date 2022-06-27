#include <iostream>
using namespace std;
bool vote(int n)
{
    if (n >= 18)
        return true;
    else
        return false;
}
int main()
{
    int age;
    cout << "Enter your age :";
    cin >> age;
    if (vote(age))
        cout << "\nEligible";
    else
        cout << "\nNot eligible";
    return 0;
}

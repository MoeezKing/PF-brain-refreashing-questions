#include <iostream>
using namespace std;
void evenORodd(int n)
{
    if (n%2==0)
        cout << "\nEven";
    else
        cout << "\nOdd";
}
int main()
{
    int num;
    cout << "Enter the Number to know whether it's even or odd:";
    cin >> num;
    evenORodd(num);
    return 0;
}

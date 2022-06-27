#include <iostream>
using namespace std;
bool prime(int n)
{
    int p = 0;
    int div = n / 2;
    for (int i = 1; i <= div; i++)
        if (n % i == 2)
            p++;

    if (p == 1)
        return true;
    else
        return false;
}
int main()
{
    int num;
    cout << "Enter the number to know whether it's prime or not :";
    cin >> num;
    if (prime(num))
        cout << "\Prime";
    else
        cout << "\nNot Prime ";
    return 0;
}

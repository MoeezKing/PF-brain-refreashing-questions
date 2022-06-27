#include <iostream>
using namespace std;
void sum(int n1, int n2)
{
    cout << n1 << " + " << n2 << " = " << (n1 + n2);
}
void product(int n1, int n2)
{
    cout << endl<<n1 << " * " << n2 << " = " << (n1 * n2);
}
int main()
{
    int n, m;
    cout << "Enter first number = " ;
    cin >> n;
    cout << "\nEnter second number = " ;
    cin >> m;
    sum(n, m);
    product(n, m);
    return 0;
}

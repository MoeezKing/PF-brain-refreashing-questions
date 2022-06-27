#include <iostream>
using namespace std;
float max(float a, float b, float c)
{
    float num;
    if (a > b)
    {
        if (a > c)
            num = a;
        else
            num = c;
    }
    else
    {
        if (b > c)
            num = b;
        else
            num = c;
    }
    return num;
        }
float min(float a, float b, float c)
{
    float num;
    if (a < b)
    {
        if (a < c)
            num = a;
        else
            num = c;
    }
    else
    {
        if (b < c)
            num = b;
        else
            num = c;
    }
    return num;
}
int main()
{
    float n1, n2, n3;
    cout << "Enter the three numbers:";
    cin >> n1;
    cout << endl;
    cin >> n2;
    cout << endl;
    cin >> n3;
    cout << endl;

    cout << "\nThe minimum number is " << min(n1, n2, n3);
    cout << "\nThe maximum number is " << max(n1, n2, n3);
    return 0;
}

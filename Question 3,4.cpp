#include <iostream>
#define pi 3.142
using namespace std;
float area(float r)
{
    return (pi * r * r);
}
float circum(float r)
{
    return (2*pi * r);
}
int main()
{
    float radius;
    cout << "Enter the radius of circle :";
    cin >> radius;
    cout << "\nArea of circle is " << area(radius);
    cout << "\nCircumfrance of circle is " << circum(radius);
    return 0;
}

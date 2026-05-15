#include <iostream>
using namespace std;

double maxOfTwo(double a, double b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    double num1, num2;

    cout << "Введіть перше число: ";
    cin >> num1;

    cout << "Введіть друге число: ";
    cin >> num2;

    cout << "Більше число: " << maxOfTwo(num1, num2);

    return 0;
}
#include <iostream>
using namespace std;

double squareArea(double a)
{
    return a * a;
}

double circleArea(double r)
{
    return 3.14 * r * r;
}

double triangleArea(double a, double h)
{
    return 0.5 * a * h;
}

int main()
{
    int choice;

    cout << "1 - Площа квадрата" << endl;
    cout << "2 - Площа кола" << endl;
    cout << "3 - Площа трикутника" << endl;

    cout << "Ваш вибір: ";
    cin >> choice;

    if(choice == 1)
    {
        double a;

        cout << "Введіть сторону квадрата: ";
        cin >> a;

        cout << "Площа квадрата: "
             << squareArea(a);
    }

    else if(choice == 2)
    {
        double r;

        cout << "Введіть радіус кола: ";
        cin >> r;

        cout << "Площа кола: "
             << circleArea(r);
    }

    else if(choice == 3)
    {
        double a, h;

        cout << "Введіть основу трикутника: ";
        cin >> a;

        cout << "Введіть висоту трикутника: ";
        cin >> h;

        cout << "Площа трикутника: "
             << triangleArea(a, h);
    }

    else
    {
        cout << "Неправильний вибір";
    }

    return 0;
}
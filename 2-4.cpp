#include <iostream>
using namespace std;

int p(int length, int width)
{
    return 2 * (length + width);
}

int main()
{
    int length, width;

    cout << "Введіть довжину прямокутника: ";
    cin >> length;

    cout << "Введіть ширину прямокутника: ";
    cin >> width;

    cout << "Периметр прямокутника: " 
         << p(length, width);

    return 0;
}
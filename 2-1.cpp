#include <iostream>
using namespace std;

int square(int n)
{
    return n * n;
}

int main()
{
    int number;

    cout << "Введіть ціле число: ";
    cin >> number;

    cout << "Квадрат: " << square(number);

    return 0;
}
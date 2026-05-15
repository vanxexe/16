#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
        return false;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int number;

    cout << "Введіть число: ";
    cin >> number;

    if(isPrime(number))
        cout << "Число просте" << endl;
    else
        cout << "Число не просте" << endl;

    cout << "Прості числа від 1 до 100:" << endl;

    for(int i = 1; i <= 100; i++)
    {
        if(isPrime(i))
            cout << i << " ";
    }

    return 0;
}
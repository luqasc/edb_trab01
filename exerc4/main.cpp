#include <iostream>

using namespace std;

int fibonacci (int n)
{
    int menor = 1, maior = 1, aux = 0;
    if (n <= 1)
    {
        return 1;
    }
    for (int i = 1; i < n; i++)
    {
        aux = maior;
        maior = menor + maior;
        menor = aux;
    }
    return maior;
}

int main ()
{
    int n = -1;
    while (n < 0)
    {
        cout << "Digite N positivo." << endl;
        cin >> n;
    }

    cout << "fib[" << n << "] = " << fibonacci(n) << endl;
    return 0;
}
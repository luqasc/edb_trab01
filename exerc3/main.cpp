#include <iostream>

using namespace std;

bool crescente (int n, int* a)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main ()
{
    int n;
    cout << "Digite N." << endl;
    cin >> n;
    int* a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Digite o " << i + 1 << "º valor." << endl;
        cin >> a[i];
    }

    if (crescente(n, a))
    {
        cout << "Crescente!" << endl;
    }
    else
    {
        cout << "Não é crescente!" << endl;
    }

    delete [] a;
    return 0;
}
#include <iostream>

using namespace std;

int busca_seq_r (int n, int x, int* a)
{
    if (n == 0)
    {
        return -1;
    }
    else
    {
        if (a[n - 1] == x)
        {
            return n - 1;
        }
        else{
            return busca_seq_r (n - 1, x, a);
        }
    }
}

//BUSCA SEQUENCIAL ITERATIVA
/*
int busca_seq_it (int n, int x, int* a)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}
*/

int main ()
{
    int n, x;
    cout << "Digite N." << endl;
    cin >> n;
    int* a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Digite o " << i + 1 << "º valor." << endl;
        cin >> a[i];
    }

    cout << "Digite X." << endl;
    cin >> x;

    cout << "ind = " << busca_seq_r(n, x, a) << "." << endl;

    delete [] a;
    return 0;
}
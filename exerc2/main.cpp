#include <iostream>

using namespace std;

int busca_bin_it (int n, int x, int* a)
{
    int inf = 0;
    int sup = n - 1;
    int meio;
    while (inf <= sup)
    {
        meio = (inf + sup)/2;
        if (x == a[meio])
        {
            return meio;
        }
        if (x < a[meio])
        {
            sup = meio - 1;
        }
        else
        {
            inf = meio + 1;
        }
    }
    return -1;
}

//BUSCA BINÁRIA RECURSIVA
/*int busca_bin_r (int x, int* a, int inf, int sup)
{
    int meio = (inf + sup)/2;
    if (a[meio] == x)
    {
        return meio;
    }
    if (inf >= sup)
    {
        return -1;
    }
    else 
    {
        if (a[meio] < x)
        {
            return busca_bin_r(x, a, meio + 1, sup);
        }
        else
        {
            return busca_bin_r(x, a, inf, meio - 1);
        }
    }
}*/

int main ()
{
    int n, x, aux;
    cout << "Digite N." << endl;
    cin >> n;
    int* a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Digite o " << i + 1 << "º valor." << endl;
        cin >> aux;
        while (i > 0 && aux < a[i - 1])
        {
            cout << "A ordem dos dados deve ser crescente." << endl;
            cout << "Digite o " << i + 1 << "º valor." << endl;
            cin >> aux;
        }
        a[i] = aux;
    }

    cout << "Digite X." << endl;
    cin >> x;

    cout << "ind = " << busca_bin_it(n, x, a) << "." << endl;

    delete [] a;
    return 0;
}
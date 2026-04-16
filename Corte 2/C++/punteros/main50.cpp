#include <iostream>
using namespace std;

void duplicar(int *p)
{
    if (p != nullptr)
    {
        *p = (*p) * 2; // Duplica el valor original
    }
}

void intercambiar(int *a, int *b)
{
    int temp = *a; // Guarda el valor de

    *a = *b; // Copia el valor de

    *b = temp; // Restaura el temporal en
}

int main()
{
    int x = 10;
    int y = 20;
    int v[3] = {5, 6, 7};
    int *px = &x; // px apunta

    cout << " x = " << x << endl;
    cout << " &x = " << &x << endl;
    cout << " px = " << px << endl;
    cout << " *p = " << *px << endl;
}
/*5. Elabore un programa que lea n números y determine cuál es el mayor, el menor y la
media de los números leídos. */
#include<iostream>
using namespace std;

int main()
{
    int n, mayor, menor, numero, suma=0;
    cout << "n?" ; cin >> n;
    for(int i=1; i<=n; i++)
    {
        cout << "numero" << i << "?"; cin >> numero;
        if(i==1)
        {
            mayor = numero;
            menor = numero;
        }
        else
        {
            if(numero>mayor)
            {
                mayor = numero;
            }
            if(numero<menor)
            {
                menor = numero;
            }
        }
        suma += numero;
    }

    cout << "mayor =" << mayor << endl;
    cout << "menor =" << menor << endl;
    cout << "media =" << float(suma)/float(n);


    return 0;
}

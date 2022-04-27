/* 10. Escribir un programa que pida al usuario una palabra y luego muestre por pantalla
una a una las letras de la palabra introducida empezando por la última. */
#include<iostream>
using namespace std;

int main()
{
    char cadena[100];
    int len=0;
    cout << "cadena? "; cin >> cadena;
    while(cadena[len] != 0)
    {
        len++;
    }
    while(len != 0)
    {
        len--;
        cout << cadena[len] << endl;
    }

    return 0;
}

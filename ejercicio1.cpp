/* 1. Sumar todos los enteros pares desde 2 hasta 100. */
#include<iostream>
using namespace std;

int main()
{

    int suma=0;
    for(int i=2;i<=100;i+=2)
    {
        suma+= i;
    }
    cout<<"suma de numeros pares de 2 a 100 ="<<suma;

    return 0;
}

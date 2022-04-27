/* 6. Elabore un programa que calcule la serie de Fibonacci. La serie de Fibonacci es la
sucesión de números: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Cada número se calcula sumando
los dos anteriores a él.*/
#include<iostream>
using namespace std;

int main()
{
    int n, n1=1, n2=0, f;
    cout << "n?" ; cin >> n;
    for(int i=0; i<n; i++)
    {
        if(i<2)
        {
            f=i;
        }
        else
        {
            f=n1+n2;
            n2=n1;
            n1=f;
        }
        cout << f << " ";
    }

    return 0;
}

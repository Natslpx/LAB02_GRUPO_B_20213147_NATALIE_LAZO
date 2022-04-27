/*7. Calcula el promedio de 3 notas para n estudiantes.*/
#include<iostream>
using namespace std;

int main()
{
    int n,nota, suma;
    cout << "n? "; cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout << "estudiante" << i <<endl;
        suma=0;
        for(int j=1; j<=3; j++)
        {
            cout << "nota " << j << "? "; cin >> nota;
            suma += nota;
        }
        cout << "promedio = " << float(suma)/3.0 << endl;

    }

    return 0;
}

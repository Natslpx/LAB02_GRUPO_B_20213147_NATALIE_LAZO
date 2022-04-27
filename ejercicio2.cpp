/* 2. Calcule los primeros 50 números primos y muestre el resultado en pantalla.*/
#include<iostream>
using namespace std;

int main()
{
    int n=2;
    int i=5, j;
    cout << "2 3 ";
    do
    {
        for(int j=3; j<i; j+=2)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>=i)
        {
            cout<<
        }
    }
    while(n<=50);

    return 0;
}

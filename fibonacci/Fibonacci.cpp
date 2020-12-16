/*
sequenza Fibonacci
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int fRicorsivo(int y);

int fIterativo(int y);

int main (int argc, const char * argv [])
{
    if (argc != 2){
        cout << "ERROR" <<endl;
        return -1;
    }

    int x = atoi (argv[1]); //controllare magari che sia positivo

    //metodo ricorsivo
    cout << fRicorsivo (x) <<endl;

    //metodo iterativo
    cout << fIterativo (x) <<endl;
    
    cout << endl;
    
    return 0;
}

int fRicorsivo (int y)
{
    if (y == 1 || y == 2)
        return 1;
    return fRicorsivo (y-1) + fRicorsivo (y-2);
}

int fIterativo(int y)
{
    int *a = new int [y];
    a [0] = 1;
    a [1] = 2;

    if (y == 1 || y == 2 )
        return 1;

    for (int i = 2; i < y; i++){
        a [i] = a [i-1] + a [i-2];
    }
    int res = a [y-2];
    delete [] a;
    return res;
}
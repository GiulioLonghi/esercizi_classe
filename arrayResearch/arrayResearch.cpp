/*
cercare elementi array
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (int argc, const char * argv [])
{
    if (argc < 2){
        cout << "ERROR" <<endl;
        return -1;
    }

    int n = argc - 2;

    int x = atoi (argv[1]);
    cout << "Elemento da cercare: " << x << endl;

    int *a = new int [n];

    bool found = false; 

    cout << "Lista valori: ";

    for (int i = 0; i < n; i++){
        a [i] = atoi (argv[i+2]);
        cout << a [i] << " ";
        if (a[i] == x)
            found = true;
    }

    cout << endl << (found? "true" : "false") << endl;
    
    return 0;
}

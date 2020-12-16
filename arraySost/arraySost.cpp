/*
sostituire elementi array
*/
//OK
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (int argc, const char * argv [])
{
    if (argc != 3){
        cout << "ERROR" <<endl;
        return -1;
    }

    const int n = 16;

    int x = atoi (argv[1]); 
    int y = atoi (argv[2]); 

    int a [] = {3, 9, 1, 2, 10, 8, 4, 5, 2, 3, 7, 4, 6, 5, 9, 8};

    for (int i = 0; i < n; i++){
        if (x == a[i]){
            a[i] = y;
        }  
    }

    for (int i = 0; i < n; i++){
        cout << a [i] << " ";
    }
    
    cout << endl;
    
    return 0;
}

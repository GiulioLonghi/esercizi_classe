//Invertire un array inserito da linea di comando
//OK
#include <iostream>

using namespace std;

int main (int argc, const char * argv [])
{
    for (int i = argc-1; i >= 1; i--)
    {
        cout << argv [i] << " ";
    }
    
    cout << endl;
    
    return 0;
}

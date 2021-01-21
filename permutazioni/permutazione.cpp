//OK
#include <iostream>
#include <string.h>
using namespace std;

int main (int argc, const char * argv[])
{
    if (argc != 3){
        cout << "ERROR! Wrong number of arguments" << endl;
        return -1;
    }

    cout << "INPUT: " << argv[1] << " " << argv[2] << endl;

    int count_1 = 0;
    int count_2 = 0;

    if (strlen(argv[1]) == strlen(argv[2]))
    {
        int N = strlen(argv[1]);
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            char c = argv[1][i];
            for (int j = 0; j < N; j++)
            {
                if (c == argv [2][j])
                {
                    count ++;
                }
            }
        }
        if (count == N)
            cout << "Sono una la permutazione dell'altra" << endl;
        else
            cout << "Non sono l'una la permutazione dell'altra" << endl;
        
    }
    else
    {
        cout << "Non sono l'una la permutazione dell'altra" << endl;
    }
    return 0;
}
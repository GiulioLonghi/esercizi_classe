
#include <iostream>

using namespace std;

int main (int argc, const char * argv[])
{
    if (argc < 2){
        cout << "ERROR! Too few arguments" << endl;
        return -1;
    }

    cout << "INPUT: ";
    for (int i = 1; i < argc; i++)
        cout << argv[i] << ", ";

    cout << endl << "OUTPUT: " << endl;

    for (int i = 1; i < argc; i++)
    {
        int n1 = atoi (argv [i]);
        for (int j = i + 1 ; j < argc; j++)
        {
            int n2 = atoi (argv [j]);
            for (int y = j + 1; y < argc; y++)
            {
                int n3 = atoi (argv [y]);
                if ((n1 + n2 + n3) == 0){
                    cout << n1 << " " << n2 << " " << n3 << endl;
                }
            }
        }
    }
    return 0;
}
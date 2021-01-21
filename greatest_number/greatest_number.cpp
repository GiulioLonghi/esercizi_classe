//OK (l'esercizio non si può finire perchè difficile)
#include <cstdlib>
#include <iostream>
using namespace std;

int convert(char c);

int main(int argc, const char* argv[])
{
    if (argc < 2) {
        cout << "Error! Too few arguments" << endl;
        return -1;
    }

    cout << "INPUT: ";
    for (int i = 1; i < argc; ++i) {
        cout << argv[i] << ", ";
    }
    cout << endl;

    for (int j = 1; j < argc; ++j) {
        int max = -1;
        int max_i = -1;
        for (int i = 1; i < argc; ++i) {
            //if (argv[i][0])
            const char * elemento = argv[i];
            if (convert(elemento[0]) > max) {
                max = convert(elemento[0]);
                max_i = i;
            }
        }

        cout << "Elemento " << max_i << " e' quello con la prima cifra piu' grande: "
             << max << endl;
        cout << argv[max_i] << endl;
        argv[max_i] = "0";
    }

    return 0;
}

int convert(char c)
{
    return int(c) - int('0');
}

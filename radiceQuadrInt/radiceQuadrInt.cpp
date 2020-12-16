//OK
#include <iostream>
#include <sstream>

using namespace std;

int convertString(char* str);

int sqrtInt (int n);

int main (int argc, char* argv [])
{
    int x = 1;
    if (argc != 2){
        cout << "Wrong number of arguments" << endl;
        return -1; 
    }

    x = convertString(argv[1]);

    cout << x << "^(1/2) = "
         << sqrtInt(x) << endl;
        
    cout << endl;
    return 0;
}

int sqrtInt (int n)
{
    int b = 2;
    while (b*b <= n) b++;

    return b - 1;
}

int convertString(char* str)
{
    std::string input(str);
    std::stringstream strStream(input);

    int result;

    strStream >> result;

    if (!str) {
        // The conversion failed
        cout << "Failed parsing input parameters" << endl;
    }

    return result;
}


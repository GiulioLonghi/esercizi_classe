#include "powInt.hpp"
#include "splitter.hpp"
#include <iostream>
#include <sstream>

using namespace std;

int convertString(char* str);
bool isArmstrong (int num, int len);

int main (int argc, char* argv [])
{
    if (argc != 2){
        cout << "Wrong number of arguments" << endl;
        return -1; //return 0 (vedi che succede)
    }

    /*
        return -1 --> "... exit code: 127"
        return 0 --> niente
        127 perchè non legge il segno usando il char
        invece negli int usa un bit per il segno
    */

    int n = convertString(argv[1]);

    int start = powInt (10, n - 1);
    int end = powInt (10, n);

    cout << "Found: ";
    for (int i = start; i < end; i++)
    {
        if (isArmstrong(i, n)){
            cout << i << ", ";
        }
    }

    cout << endl;
    return 0;
}

bool isArmstrong (int num, int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        int digit = splitter(num, i);
        sum += powInt (digit, len);
    }

    return sum == num;
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


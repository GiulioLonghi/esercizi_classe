//OK
#include <iostream>

using namespace std;

int main (int argc, const char * argv [])
{
    if (argc != 2){
        cout << "Error! Too much arguments" << endl;
        return -1;
    }

    const char * s = argv [1];
    int i = 0;

    while (s [i] != '\0'){
        char c = s [i];
        int count = 1;
        while (s [i+count] == c)
            count ++;
        cout << c << count;
        i += count;
    }
    return 0;
}

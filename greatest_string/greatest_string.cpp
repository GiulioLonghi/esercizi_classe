//OK 
#include <cstdlib>
#include <iostream>
using namespace std;

int is_contained(char c, const char * s, int start, int end)
{
    int index = -1;
    for (int i = start; i <= end; i++){
        if (s[i] == c){
            index = i - start;
            i = end;
        }
    }
    return index;
}

int main(int argc, const char* argv[])
{
    if (argc != 2) {
        cout << "Error! Wrong number of arguments" << endl;
        return -1;
    }

    cout << "INPUT: " << argv[1]<<endl;
    const char * s = argv[1];
    int start = 0;
    int end = 1;
    int max = 1;
    int count = 1;

    while (s[end] != '\0'){
        int i = is_contained(s[end], s, start, end-1);
        if (i<0){
            count ++;
            if (count > max)
                max = count;
        }
        else {
            start += i+1;
            count -= i; 
        }

        end++;
    }
    cout << max << endl;
    return 0;
}


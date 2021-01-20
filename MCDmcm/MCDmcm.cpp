#include <iostream>
using namespace std;

int mcd (int a, int b);

int mcm (int a, int b);


int main (int argc, const char * argv[])
{
    if (argc != 3){
        cout << "ERROR" << endl;
        return -1;
    }

    int a = atoi (argv [1]);
    int b = atoi (argv [2]);

    cout<<"MCD = "<<mcd(a, b)<<endl;
    cout<<"mcm = "<<mcm(a, b)<<endl;


    return 0;
}

int mcd (int a, int b)
{
    int mcd = 1;
    int min_ab = (a<b)?a:b;
    for (int i = min_ab; i > 0; --i)
    {
        if (a%i==0 && b%i==0){
            mcd = i;
            i = 0;
        }
    }
    return mcd;
}

int mcm (int a, int b)
{
    int mcm;
    int max_ab = (a>b)?a:b;
    for (int i = 1; i > 0; i++)
    {
        if ((max_ab*i)%a==0 && (max_ab*i)%b==0){
            mcm = max_ab*i;
            i = 0;
        }
    }
    return mcm;
}

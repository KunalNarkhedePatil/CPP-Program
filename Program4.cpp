//Accept onr number and check Wheather is is Divisible by 5 or not.
#include <iostream>
#include <stdbool.h>

using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0
class Demo
{
public:
    bool Check(BOOL iNo)
    {
        if ((iNo % 5) == 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
};
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    cout<<"Enter Number"<<"\n";
    cin>>iValue;

    Demo dobj;
    bRet = dobj.Check(iValue);

    if (bRet == TRUE)
    {
        cout<<"Divisible by 5"<<"\n";
    }
    else
    {
        cout<<"Noy Divisible by 5"<<"\n";
    }
    return 0;
}
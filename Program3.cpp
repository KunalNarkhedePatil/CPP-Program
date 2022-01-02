//Program to Print % to 1 numbers on screen
#include<iostream>

using namespace std;
class Demo
{
    public:
    void Display()
    {
        int i = 0;
        //int i=5;

        for (i = 5; i > 0; i--)
        {
            cout<<"\t"<<i;
            // i++;
        }
    }
};

int
main()
{
    Demo dobj;
    dobj.Display();
    return 0;
}

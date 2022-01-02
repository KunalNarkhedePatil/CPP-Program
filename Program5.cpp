//Accept number from user and print that number of * on sreen
#include <iostream>

using namespace std;

class Demo
{
public:
    void Display(int iNo)
    {
        int i = 0;
        for (i = 1; i <= iNo; i++)
        {
            cout << "*";
        }
    }
};

int main()
{
    int iValue = 0;

    cout << "Enter number\n";
    cin >> iValue;

    Demo dobj;
    dobj.Display(iValue);

    return 0;
}
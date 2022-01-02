//Program to divide two number
#include<iostream>
using namespace std;

class Demo
{
    public:
    int Divide(int iNo1,int iNo2)
    {
      int iAns=0;

      if(iNo2>iNo1)
      {
          return -1;
      }
      iAns=iNo1/iNo2;
      return iAns;
    }
};    
int main()
{
    int iValue1=15,iValue2=5;
    int iRet=0;
 
    Demo dobj;
    iRet=dobj.Divide(iValue1,iValue2);
    
    cout<<"Division is "<<iRet;
    return 0;
}
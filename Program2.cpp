//Programto print 5 times "Marvellous on screen".
#include<iostream>
using namespace std;
class Demo
{
   public:
   void Display()
   {
      int i=0;
      for(i=1;i<=5;i++)
      {
          cout<<"Marvellous\n";
      }
   }
};
int main()
{
    Demo dobj;
    dobj.Display();
    return 0;
}
#include<iostream>
#include<conio.h>

using namespace std;

class Base
{
    public :
          int Add(int No1,int No2)
          {
             int Sum=0;
             Sum = No1 + No2;
             return Sum;

          }

};

class Derived : public Base
{
public :
    int d_No;
    int My_Add(int N1,int N2,int N3)
    {
        int Res=0;
        Res = Add(Add(N1,N2),N3);
        return Res;

    }

};

int main()
{
    Base bobj;

    cout << "\n Size Of Base Class : " << sizeof(bobj) << endl;

    cout << "\n Addition Of 100 And 200 is " << bobj.Add(100,200) << endl;

    Derived dobj;

    cout << "\n Size Of Derived Class : " << sizeof(dobj) << endl;

    cout << "\n Addition Of 100 , 200 and 300 is " << dobj.My_Add(100,200,300) << endl;

    getch();
    return 0;
}

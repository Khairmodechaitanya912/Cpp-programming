#include<iostream>
#include<conio.h>

using namespace std;

inline int Add(int N1,int N2)
{
    int Res=0;

    Res=N1+N2;

    return Res;

}

int main()
{
    int No1=0,No2=0,Sum=0;

    cout << endl << " Enter Number 1 = ";
    cin >> No1;

    cout << endl << " Enter Number 2 = ";
    cin >> No2;

    Sum= Add(No1,No2);

    cout << endl << " Addition of " << No1 << " & " << No2 << " is  = " << Sum << endl;

    getch();
    return 0;
}

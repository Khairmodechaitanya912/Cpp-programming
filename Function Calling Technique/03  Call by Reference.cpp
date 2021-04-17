#include<iostream>
#include<conio.h>

using namespace std;

void Reference(int&);

int main()
{
    int No=10;

    cout << endl << "Value Before Call : " << No << endl;

    Reference(No);

    cout << endl << "Value After Call : " << No << endl;

    getch();
    return 0;
}

void Reference(int &Ref)
{
    cout << endl << "Inside Function...!!" << endl;
    Ref++;
}

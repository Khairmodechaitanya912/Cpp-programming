#include<iostream>
#include<conio.h>

using namespace std;

void Value (int);

int main()
{
    int No=10;

    cout << endl << "Value Before Call : " << No << endl;

    Value(No);

    cout << endl << "Value After Call : " << No << endl;

    getch();
    return 0;
}

void Value(int i)
{
    cout << endl << "Inside Function...!!" << endl;
    i++;
}

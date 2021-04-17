#include<iostream>
#include<conio.h>

using namespace std;

void Address(int*);

int main()
{
    int No=10;

    cout << endl << "Value Before Call : " << No << endl;

    Address(&No);

    cout << endl << "Value After Call : " << No << endl;

    getch();
    return 0;
}

void Address(int *i)
{
    cout << endl << "Inside Function...!!" << endl;
    (*i)++;
}

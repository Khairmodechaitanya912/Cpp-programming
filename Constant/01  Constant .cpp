#include<iostream>
#include<conio.h>
using namespace std;

float Area_of_Circle(float);

const float Pi=3.14;                          // Constant Global Variable

int main()
{
    const int No=0;                          // Local Constant Variable
    float R=0.0;                             // Non Constant Local Variable

    // No++;                                 // Not Allowed as it is Read Only Variable i.e Constant
    // No=101;                               // Not Allowed as it is Read Only Variable i.e Constant

    cout << "\n Enter Radius of Circle = ";
    cin >> R;

    cout << "\n Area of Circle is = " << Area_of_Circle(R) << endl;

    getch();
    return 0;

}

float Area_of_Circle(float Rad)
{
    float Area=0.0;

    Area= Pi*Rad*Rad;

    return Area;
}

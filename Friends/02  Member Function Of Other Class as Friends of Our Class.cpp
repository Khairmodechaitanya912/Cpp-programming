#include<iostream>
#include<conio.h>

using namespace std;

class Arith
{
       public :
           Arith()
           {

               cout << "\n Inside Constructor of Arith Class...!! " << endl;

           }

           ~Arith()
           {

               cout << "\n Inside Destructor of Arith Class...!! " << endl;

           }

           void Operate(int , int);

};

class Calc
{
       private :
              int Sum;

              void Addition()
              {

                  Sum = N1 + N2 ;

              }

       protected :
                int Sub;

                void Subtraction()
                {

                    Sub = N1 - N2 ;

                }

       public :
             int N1 , N2 ;

             Calc()
             {

                 N1 = N2 = Sum = Sub = 0;

                 cout << "\n Inside Default Constructor of Calc Class...!!" << endl;

             }

             ~Calc()
             {

                 cout << "\n Inside Destructor of Calc Class...!!" << endl;

             }

             friend void Arith :: Operate(int , int);                                 // Declaring Friend to a Member Function of Another Class

};

void Arith :: Operate(int Num1 , int Num2)
{

    Calc Obj;

    Obj.N1 = Num1;
    Obj.N2 = Num2;

    Obj.Addition();

    cout << "\n Summation Of Given Number Is = " << Obj.Sum << endl;

    getch();

    Obj.Subtraction();

    cout << "\n Subtraction Of Given Number Is = " << Obj.Sub << endl;

}

int main()
{

    int No1 = 0 , No2 = 0 ;

    cout << "\n Enter Two Number = ";
    cin >> No1 >> No2;

    Arith A_Obj;
    A_Obj.Operate(No1 , No2);

    getch();
    return 0;

}

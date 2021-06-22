#include<iostream>
#include<conio.h>

 using namespace std;

 class Calc
 {
      private :
             int Sum;

             void Addition()
            {

                Sum = N1 + N2 ;

            }

   protected :
            int Sub ;

            void Subtraction()
            {

                Sub = N1 - N2 ;

            }

      public :
            int N1 , N2 ;

            Calc()
            {

                 N1 = N2 = Sum = Sub =0 ;

                 cout << "\n Inside Default Constructor... " << endl;

            }

           ~Calc()
            {

                  cout << "\n Inside Destructor... " << endl;

            }

      friend void Operator(int , int);
 };

 void Operator(int Num1 , int Num2)
 {
     Calc Obj;

     Obj.N1 = Num1 ;
     Obj.N2 = Num2 ;

     Obj.Addition();

     cout << "\n Summation of Given Numbers is = " << Obj.Sum << endl;

     getch();

     Obj.Subtraction();

     cout << "\n Subtraction of Given Number is = " << Obj.Sub << endl;

     cout << "\n Press Any Key To Go Back To Main()...!! " ;

     getch();
 }


 int main()
 {
     int No1 = 0 , No2 = 0 ;

     cout << "\n Enter 2 Number = ";
     cin >> No1 >> No2;

     Operator(No1 , No2);

     cout << "\n Back in Main() \n Thanks FRIENDS...!! " << endl ;

     getch();
     return 0;
 }

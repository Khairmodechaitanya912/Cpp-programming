#include<iostream>
#include<conio.h>

using namespace std;

class A1
{
    public :
          int a,b;

          A1()                          // Constructor
          {
            cout << "\n A1 :: Constructor..." << endl;
          }

           ~A1()                        // Destructor
          {
             cout << "\n A1 :: Destructor..." << endl;
          }

          void Fun()                  // Member Function
         {
             a=100;
             b=200;

             cout << "\n Value of a and b is : " << a << " " << b << endl;
        }

};

class D1 : public A1                // Derived Class
{
    public :
          int x;

          D1()                          // Constructor
        {
            cout << "\n D1 :: Constructor..." << endl;
        }

        ~D1()                          // Destructor
        {
            cout << "\n D1 :: Destructor..." << endl;
        }

        void Gun()                      // Member Function
       {
           D1 :: Fun();
           x=300;

           cout << "\n Value of x is : " << x << endl;
      }

};

class D2 : public D1                     // Derived Class 2
{
   public :
         int i,j;

         D2()                                 //constructor
        {
           cout << "\n D2 :: Constructor..." << endl;
        }

        ~D2()                                 // Destructor
        {
            cout << "\n D2 :: Destructor..." << endl;
        }

        void Sun()                             // Member Function
        {
            D2 :: Gun();
            i=400;
            j=500;

            cout << "\n Value of i and j is : " << i << " " << j << endl;
       }


};

// Main Function

int main()
{
    D2 obj;           // Object

    cout << endl <<  " Size of Given Object is : " << sizeof(obj) << endl;

    obj.Sun();

    getch();
    return 0;

}

#include<iostream>
#include<conio.h>

using namespace std;

class A1                                       //Base class
{
     public :
         int a,b;

         A1()
         {
             cout << "\n A1 :: Constructor..." << endl;
         }

         ~A1()
         {
             cout << "\n A1 :: Destructor..." << endl;
         }

         void fun()
         {
             cout << "\n Karad :: fun()..." << endl;
         }

};

class A2                                          // Base Class
{
     public :
           int a,b;

           A2()
           {
               cout << "\n A2 :: Constructor..." << endl;
           }

           ~A2()
           {
              cout << "\n A2 :: Destructor..." << endl;
           }

           void gun()
           {
               cout << "\n Karad :: gun()..." << endl;
           }

};

class D1 : public A1,A2                        // Derived class
{
     public :
         int l,m;

         D1()
         {
             cout << "\n D1 :: Constructor..." << endl;
         }

         ~D1()
         {
             cout << "\n D1 :: Destructor..." << endl;
         }

         void sun()
         {
              cout << "\n D1 :: sun()..." << endl;
         }

};

// Main Function

int main()
{
     D1 obj;

     cout << endl <<sizeof(obj) << endl;

     getch();
     return 0;
}

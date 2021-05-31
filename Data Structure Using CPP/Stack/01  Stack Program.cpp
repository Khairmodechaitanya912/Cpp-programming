#include<iostream>
using namespace std;
#define Max 4

class Stack
{
  public:
    int Top,stack[Max];

    Stack()
    {
      Top=-1;
    }

   void Push(int item);
   void Pop();

};

void Stack::Push(int item)
{
   if(Top>=(Max-1))
   {
     cout<<"\nStack Is Full...!!"<<endl;
   }
  else
  {
    Top++;
    stack[Top]=item;

    cout<<"\nPushed Element Is "<<item <<endl;

  }

}

void Stack::Pop()
{
   int item;

    if(Top<0)
    {
      cout<<"\nStack Is Empty...!!"<<endl;
    }
   else
   {
     item=stack[Top];
     Top--;

     cout<<"\nPoped Element Is "<<item <<endl;

   }

}

int main()
{
    Stack S;

    S.Push(10);
    S.Push(20);
    S.Push(30);
    S.Push(40);
    S.Push(50);

    cout << "===============================================\n";

    S.Pop();
    S.Pop();
    S.Pop();
    S.Pop();
    S.Pop();

    cout << "===============================================\n";

    return 0;
}

#include<iostream>
using namespace std;

#define MAX 100

class ArrayStack
{
    int arr[MAX];
    int top = -1;

  public:

      bool isEmpty()
      {
         return top == -1;
      }

      bool isFull()
      {
         return top == MAX - 1;
      }

      void push(int x)
      {
          if (isFull())
          {
             cout <<"Overflow" << endl;

              return ;
          }

            arr[++top] = x;
      }

      int pop()
      {
          if (isEmpty())
          {
               cout << "Underflow" << endl;

               return -1;

          }

          return arr[top--];
      }

      int peek()
      {
         if (isEmpty())
         {
            cout << "Underflow" << endl;
 
            return -1;
         }

          return arr[top];
      }
};

int main()
{
   ArrayStack s;

   s.push(10);
   s.push(20);
   s.push(30);


    cout << "Top element: " << s.peek() <<  endl;

    cout << "Popped: " << s.pop() <<  endl;
    

    cout << "Popped: " << s.pop() <<  endl;

    cout << "Top element: " << s.peek() <<  endl;

     return 0;
}

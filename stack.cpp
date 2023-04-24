#include <bits/stdc++.h>
using namespace std;
#define MAX 100

class Stack
{
    int top;

public:
    int arr[MAX]; // Maximum size of Stack

    Stack()
    {
        top = -1;
    }

    void push(int x);
    int pop();
    int Top();
    bool isEmpty();
};

void Stack::push(int x)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        arr[++top] = x;
        cout << x << "Pushed into stack" << endl;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow" << endl;
        return 0;
    }
    else
    {
        int x = arr[top--];
        return x;
    }
}

int Stack::Top()
{
    if (top < 0)
    {
        cout << "Stack is Empty";
        return 0;
    }
    else
    {
        int x = arr[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    cout << "Top element : " << s.Top() << endl;

    cout << "Elements left : ";
    while (!s.isEmpty())
    {
        cout << s.Top() << " ";
        s.pop();
    }
}
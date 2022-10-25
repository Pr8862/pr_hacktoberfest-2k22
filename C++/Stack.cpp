#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top, size;

    // constructor
    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    // functions
    void push(int n)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = n;
        }
        else
        {
            cout << "Over flow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Underflow" << endl;
        }
    }

    int peak()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Empty" << endl;
        }

        return -1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Top element: " << st.peak() << endl
         << endl;
    st.pop();
    cout << "After poping: " << st.peak() << endl
         << endl;
}

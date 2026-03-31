#include <bits/stdc++.h>
using namespace std;

void PUSH(int Stack[], int &top, int maxSize, int x)
{
    if (top == maxSize - 1)
        cout << "Stack Overflow!" << endl;
    else
    {
        Stack[++top] = x;
        cout << x << " pushed into stack." << endl;
    }
}

int POP(int Stack[], int &top)
{
    if (top == -1)
    {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    return Stack[top--];
}

int main()
{
    int Stack[10000];
    int top = -1;
    int maxSize = 1000;

    while (true)
    {
        cout << "\nEnter your choice:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Exit\n";

        int c;
        cin >> c;

        switch (c)
        {
        case 1:
        {

            int x;
            cin >> x;
            PUSH(Stack, top, maxSize, x);

            break;
        }

        case 2:
        {
            int popped = POP(Stack, top);
            if (popped != -1)
                cout << popped << " popped from stack." << endl;
            break;
        }

        case 3:
        {
            cout << "Exiting program..." << endl;
            return 0;
        }

        default:
            cout << "Invalid choice!" << endl;
        }

        cout << "\nStack elements (top to bottom):\n";
        cout << "Stack[";
        for (int i = 0; i <= top; i++)
        {
            cout << Stack[i]<< " ";
        }
        cout <<"]";
    }
}
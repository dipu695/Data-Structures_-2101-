#include <bits/stdc++.h>
using namespace std;

void PUSH(int stack[], int &top, int maxSize, int x)
{
    if (top == maxSize - 1)
    {
        cout << "Stack OverFlow!" << endl;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

int POP(int stack[], int &top)
{
    if (top == -1)
    {
        cout << "Overflow" << endl;
        return -1;
    }
    else
    {
        int x = stack[top];
        top--;
        return x;
    }
}

int main()
{
    int mx;
    cout << "How much size you want of stack: ";
    cin >> mx;
    int stack[mx];
    int top = -1;
    int n;
    cout << "How many element you want to push: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter element " << i + 1 << ":" << " ";
        cin >> x;
        PUSH(stack, top, mx, x);
    }
    cout << "Stack  elements: ";
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << " ";
    }

    int p;
    cout << "How many elements you want to pop: ";
    cin >> p;

    for (int i = 0; i < p; i++)
    {
        int remove = POP(stack, top);
        if (remove != -1)
        {
            cout << "Poped from stack" << endl;
        }
    }

    cout << "Final Stack :";
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << " ";
    }

    cout << endl;
    return 0;
}
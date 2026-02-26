//Push and Print Stack
#include <bits/stdc++.h>
using namespace std;

void push(int stack[], int &top, int maxSize, int x)
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

int main()
{
    int maxSize;
    cout << "Enetr Max size: ";
    cin >> maxSize;

    int stack[maxSize];
    int top = -1;

    int n;
    cout << "How many elements you want to push: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter element " << i + 1 << ":";
        cin >> x;
        push(stack, top, maxSize, x);
    }

    cout << "Stack form bottom to top: ";
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << " ";
    }
    cout << endl;

    return 0;
}
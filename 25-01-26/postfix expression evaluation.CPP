#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int stackArr[MAX];
int top = -1;

void push(int value)
{
    stackArr[++top] = value;
}

int pop()
{
    return stackArr[top--];
}

int main()
{
    ifstream fin("input.txt"); 
    if (!fin)
    {
        cout << "FILE NOT FOUND";
        return 0;
    }
    ofstream fout ("output.txt");
    if(!fout)
    {
        cout << "Output file not found!";
    }

    char ch;
    int num = 0;
    bool building = false;

    while (fin.get(ch) && ch != '$')
    {
      
        if (ch >= '0' && ch <= '9')
        {
            num = num * 10 + (ch - '0');
            building = true;
        }
        
        else if (ch == ' ' && building)
        {
            push(num);
            num = 0;
            building = false;
        }
        
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            if (building)
            {
                push(num);
                num = 0;
                building = false;
            }

            int op2 = pop();
            int op1 = pop();
            int result;

            switch (ch)
            {
            case '+':
                result = op1 + op2;
                break;
            case '-':
                result = op1 - op2;
                break;
            case '*':
                result = op1 * op2;
                break;
            case '/':
                result = op1 / op2;
                break;
            }

            push(result);
        }
    }

    fout << "Result: " << stackArr[top];
    cout <<"Result printed Done.\n"<<"Result is: " << stackArr[top];
    fin.close();
    fout.close();
    return 0;
}
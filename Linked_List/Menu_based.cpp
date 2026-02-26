#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "List is empty!\n";
            return;
        }

        Node *temp = head;
        head = head->next;
        delete temp;

        if (head == NULL)
            tail = NULL;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "List is empty!\n";
            return;
        }

        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    void printll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    List ll;
    int choice;

    while (true)
    {
        cout << "\nCurrent Linked List: ";
        ll.printll();

        cout << "\n1. Add element\n";
        cout << "2. Remove element\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int val, pos;
            cout << "Enter value: ";
            cin >> val;

            cout << "1. Add at front\n";
            cout << "2. Add at back\n";
            cout << "Enter option: ";
            cin >> pos;

            if (pos == 1)
                ll.push_front(val);
            else if (pos == 2)
                ll.push_back(val);
            else
                cout << "Invalid option!\n";
        }
        else if (choice == 2)
        {
            int pos;
            cout << "1. Remove from front\n";
            cout << "2. Remove from back\n";
            cout << "Enter option: ";
            cin >> pos;

            if (pos == 1)
                ll.pop_front();
            else if (pos == 2)
                ll.pop_back();
            else
                cout << "Invalid option!\n";
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}

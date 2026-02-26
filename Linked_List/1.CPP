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
        Node *newNode = new Node(val); // Dynamic
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        // Node newNode(val);
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
            cout << "Linked list is empty!" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "Linked is empty!" << endl;
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "Empty !" << endl;
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Error!" << endl;
            }
            temp = temp->next;
        }

        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void printll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ->" << " ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int Search(int key)
    {
        Node *temp = head;
        int index = 0;
        while (temp != NULL)
        {
            if (temp->value == key)
            {
                return index;
            }
            temp = temp->next;
            index++;
        }
        return -1;
    }
};
int main()
{
    List ll, L1;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    ll.pop_front();

    ll.pop_back();

    ll.printll();

    L1.push_front(3);
    L1.push_front(2);
    L1.push_front(1);
    L1.insert(10, 2);
    L1.printll();
    // cout << L1.Search(2) << endl;
    return 0;
}
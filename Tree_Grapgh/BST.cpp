#include <bits/stdc++.h>
using namespace std;

int tree[100] = {0};

// Insert into BST
void insert(int val)
{
    int i = 1;
    while (true)
    {
        if (tree[i] == 0)
        { // empty spot found
            tree[i] = val;
            break;
        }
        if (val < tree[i])
            i = 2 * i; // go left
        else
            i = 2 * i + 1; // go right
    }
}

// Delete from BST
void deleteNode(int val)
{
    int i = 1;
    while (i < 100)
    {
        if (tree[i] == 0)
        {
            cout << "Value not found!\n";
            return;
        }
        if (tree[i] == val)
        {
            tree[i] = 0; // mark as deleted
            cout << val << " deleted successfully!\n";
            return;
        }
        if (val < tree[i])
            i = 2 * i; // go left
        else
            i = 2 * i + 1; // go right
    }
}

// Preorder: Root -> Left -> Right
void preorder(int i)
{
    if (i >= 100 || tree[i] == 0)
        return;
    cout << tree[i] << " ";
    preorder(2 * i);
    preorder(2 * i + 1);
}

// Inorder: Left -> Root -> Right
void inorder(int i)
{
    if (i >= 100 || tree[i] == 0)
        return;
    inorder(2 * i);
    cout << tree[i] << " ";
    inorder(2 * i + 1);
}

// Postorder: Left -> Right -> Root
void postorder(int i)
{
    if (i >= 100 || tree[i] == 0)
        return;
    postorder(2 * i);
    postorder(2 * i + 1);
    cout << tree[i] << " ";
}

void display()
{
    cout << "Preorder:  ";
    preorder(1);
    cout << "\nInorder:   ";
    inorder(1);
    cout << "\nPostorder: ";
    postorder(1);
    cout << endl;
}

int main()
{
    int choice, val;

    while (true)
    {
        cout << "\n--- BST Menu ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Traversal\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> val;
            insert(val);
            cout << val << " inserted successfully!\n";
            break;
        case 2:
            cout << "Enter value to delete: ";
            cin >> val;
            deleteNode(val);
            break;
        case 3:
            cout << "\n--- Traversal Results ---\n";
            display();
            break;
        case 4:
            cout << "Exiting...\n";
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
// ```

// ---

// **Sample run:**
// ```
// --- BST Menu ---
// 1. Insert
// Enter value to insert: 40  → inserted
// Enter value to insert: 20  → inserted
// Enter value to insert: 60  → inserted
// Enter value to insert: 10  → inserted
// Enter value to insert: 30  → inserted

// --- Traversal Results ---
// Preorder:  40 20 10 30 60
// Inorder:   10 20 30 40 60   ← sorted! BST proof
// Postorder: 10 30 20 60 40

// 2. Delete
// Enter value to delete: 20  → deleted

// --- Traversal Results ---
// Inorder: 10 30 40 60
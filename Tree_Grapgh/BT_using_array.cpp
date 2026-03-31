//here 
// Node at index i
// Left-Child===> 2*i
// Right-Child ==> 2*i+1
// root ==> index 1
// Empty ==> tree[i] == 0


#include <bits/stdc++.h>
using namespace std;

int tree[100];
int n;

// Build tree with user input
void buildTree() {
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter elements level by level: ";
    for (int i = 1; i <= n; i++)
        cin >> tree[i];
}

// Preorder: Root -> Left -> Right
void preorder(int i) {
    if (i > n || tree[i] == 0) return;
    cout << tree[i] << " ";
    preorder(2 * i);
    preorder(2 * i + 1);
}

// Inorder: Left -> Root -> Right
void inorder(int i) {
    if (i > n || tree[i] == 0) return;
    inorder(2 * i);
    cout << tree[i] << " ";
    inorder(2 * i + 1);
}

// Postorder: Left -> Right -> Root
void postorder(int i) {
    if (i > n || tree[i] == 0) return;
    postorder(2 * i);
    postorder(2 * i + 1);
    cout << tree[i] << " ";
}

int main() {
    buildTree();

    cout << "\n--- Traversal Results ---\n";
    cout << "Preorder:  "; preorder(1);
    cout << "\nInorder:   "; inorder(1);
    cout << "\nPostorder: "; postorder(1);
    cout << endl;

    return 0;
}
// ```

// ---

// **Sample run:**
// ```
// Enter number of nodes: 7
// Enter elements level by level: 1 2 3 4 5 6 7

// --- Traversal Results ---
// Preorder:  1 2 4 5 3 6 7
// Inorder:   4 2 5 1 6 3 7
// Postorder: 4 5 2 6 7 3 1
// ```

/* **Tree that gets built:**
// ```
//           1        index 1
//          / \
//         2   3      index 2, 3
//        / \ / \
//       4  5 6  7    index 4, 5, 6, 7*/
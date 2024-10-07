#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

struct Node {
    int data;
    int height;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
        height = 0;
    }
};

Node *root = NULL;

int height(Node *node) {
    if(node == NULL) return -1;
    return node -> height;
}

Node *insertIntoBST(Node *node , int data) {
    if(node == NULL) {
        return new Node(data);
    }

    if(data < node -> data) {
        node -> left = insertIntoBST(node -> left , data);
    }
    else {
        node -> right = insertIntoBST(node -> right , data);
    }
    node -> height = max(height(node -> left) , height(node -> right)) + 1;
    cout << node -> height << " ";
    return node;
}

bool isBalanced(Node *node) {
    if(node == NULL) return true;

    return (abs(height(node -> left) - height(node -> right)) <= 1) && isBalanced(node -> left) && isBalanced(node -> right); 
}

void solve() {

    root = insertIntoBST(root , 15);
    root = insertIntoBST(root , 10);
    root = insertIntoBST(root , 20);

    if(isBalanced(root)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int T = 1;
    // cin >> T;
 
    while (T--)
        solve();
}

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};

Node *root = NULL;

Node *insertIntoBST(Node *node , int data) {
    if(node == NULL) {
        return new Node(data);
    }

    else if(data < node -> data) {
        node -> left = insertIntoBST(node -> left , data);
    }

    else {
        node -> right = insertIntoBST(node -> right , data);
    }
    return node;
}

int height(Node *node) {
    if(node == NULL) return -1;

    int leftheight = height(node -> left);
    int rightheight = height(node -> right);

    return max(leftheight , rightheight) + 1;
}

void solve() {
    root = insertIntoBST(root , 15);
    root = insertIntoBST(root , 10);
    root = insertIntoBST(root , 20);
    root = insertIntoBST(root , 5);
    root = insertIntoBST(root , 4);
    cout << height(root);
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

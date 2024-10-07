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

    if(data < node -> data) {
        node -> left = insertIntoBST(node -> left , data);
    }
    else {
        node -> right = insertIntoBST(node -> right , data);
    }
    return node;
}

int FindMin(Node *node) {
    if(node == NULL) {
        return -1;
    }
    else if(node -> left == NULL) return node -> data;

    return FindMin(node -> left);
}

int FindMax(Node *node) {
    if(node == NULL) return -1;

    else if(node -> right == NULL) return node -> data;

    return FindMax(node -> right);
}

void solve() {

    root = insertIntoBST(root , 15);
    root = insertIntoBST(root , 10);
    root = insertIntoBST(root , 20);
    root = insertIntoBST(root , 5);

    cout << FindMax(root) << endl;
    cout << FindMin(root) << endl;
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

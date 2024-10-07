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
    }
};

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
    return node;
}

void preetyDisplay(Node *node , int level) {
    if(node == NULL) return;

    preetyDisplay(node -> right , level + 1);
    if(level != 0) {
        for(int i = 0 ; i < level - 1 ; i++) {
            cout << "|\t\t";
        }
        cout << "|------>" << node -> data << endl;
    }
    else {
        cout << node -> data << endl;
    }
    preetyDisplay(node -> left , level + 1);
}

void solve() {
    Node *root;
    cout << "ENTER THE ROOT NODE: " << endl;
    int x;
    cin >> x;
    root = new Node(x);

    insertIntoBST(root , 10);
    insertIntoBST(root , 20);
    insertIntoBST(root , 8);
    insertIntoBST(root , 9);
    preetyDisplay(root , 0);
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

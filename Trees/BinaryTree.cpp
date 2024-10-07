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

void BinaryTree(Node *node) {
    
    cout << "Do You Want To Enter Left Of: " << node -> data << " ";
    char left;
    cin >> left;
    if(left == 'y') {
        cout << "Enter The Value Of The Left Of " << node -> data << " ";
        int data;
        cin >> data;
        node -> left = new Node(data);
        BinaryTree(node -> left);
    }
    cout << "Do You Want To Enter Right Of " << node -> data << " ";
    char right;
    cin >> right;
    if(right == 'y') {
        cout << "Enter The Value Of The Right Of " << node -> data << " ";
        int data;
        cin >> data;
        node -> right = new Node(data);
        BinaryTree(node -> right);
    }
}

void display(Node *node) {
    if(node == NULL) return;
    cout << node -> data << " ";
    display(node -> left);
    display(node -> right);
}

void preetyDisplay(Node *node , int level) {
    if(node == NULL) return;

    preetyDisplay(node -> right , level + 1);
    if(level != 0) {
        for(int i = 0 ; i < level - 1 ; i++) {
            cout << "|\t";
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
    cout << "Enter The Data " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    
    BinaryTree(root);
    display(root);
    cout << endl;
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

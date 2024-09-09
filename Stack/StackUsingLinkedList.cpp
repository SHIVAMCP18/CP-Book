#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long

class stackNode {
public:
    int data;
    stackNode *next;

    stackNode(int a) {
        data = a;
        next = NULL;
    }
};

stackNode *top = NULL;
int size = 0;

void push(int x) {
    stackNode *temp = new stackNode(x);
    temp -> next = top;
    top = temp;
    size++;
}

void pop() {
    if(top == NULL) {
        cout << "Stack Is Empty";
        return;
    }
    top = top -> next;
    size--;
}

void Top() {
    cout << top -> data;
    return;
}

void Size() {
    cout << size;
    return;
}

void printLL() {
    stackNode *n = top;
    while(n != NULL) {
        cout << n -> data << " ";
        n = n -> next;
    }
}

void solve() {
    push(3);
    push(4);
    pop();
    printLL();
    // Size();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int T = 1;
    // cin >> T;
 
    while(T--)
        solve();
}
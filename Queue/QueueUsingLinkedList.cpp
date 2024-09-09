#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long

class queueLL {
public:
    int data;
    queueLL *next;

    queueLL(int x) {
        data = x;
        next = NULL;
    }
};

queueLL *front = NULL , *rear = NULL;
int size = 0;

void push(int x) {
    queueLL *temp = new queueLL(x);

    if(front == NULL) {
        front = rear = temp;
    }
    else {
        rear -> next = temp;
        rear = temp;
    }

    size++;
}

void pop() {
    if(front == NULL) {
        cout << "Queue Is Empty";
        return;
    }
    
    int data = front -> data;
    front = front -> next;
    size--;
    return;
}

void Size() {
    cout << size << endl;
    return;
}

void display() {
    queueLL *n = front;
    while(n != NULL) {
        cout << n -> data << " ";
        n = n -> next;
    }
    cout << endl;
}

void solve() {
    push(3);
    push(8);
    pop();
    push(5);
    display();
    Size();
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
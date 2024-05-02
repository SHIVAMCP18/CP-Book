#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

struct Node{
    int data;
    Node *next;
};

void PrintLinkedList(Node *n){
    while(n != NULL){
        cout << n -> data << " ";
        n = n -> next;
    }
}

Node *Front_Push(Node *head , int newData){
    Node *newNode = new Node();
    newNode -> data = newData;
    newNode -> next = head;
    head = newNode;
    return head;
}

void Middle_push(Node *prev_node , int newData){
    Node *newNode = new Node();
    newNode -> data = newData;
    newNode -> next = prev_node -> next;
    prev_node -> next = newNode;
}

void solve(){
    Node *head = NULL;
    head = Front_Push(head , 5);
    head = Front_Push(head , 7);
    head = Front_Push(head , -3);
    Middle_push(head -> next , 68);
    PrintLinkedList(head);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

struct Node{
    Node *Next , *Prev;
    int Data;
};

void FrontInsert(Node **head_ref , int NewData){
    Node *NewNode = new Node();
    NewNode -> Data = NewData;
    NewNode -> Next = *head_ref;
    NewNode -> Prev = NULL;

    if((*head_ref) != NULL){
        (*head_ref) -> Prev = NewNode;
    }
    (*head_ref) = NewNode;
}

void MiddleInsert(Node *prev_node , int NewData){

    if(prev_node == NULL){
        cout << "given prev. node can't be null";
    }

    Node *NewNode = new Node();
    NewNode -> Data = NewData;
    NewNode -> Next = prev_node -> Next;

    prev_node -> Next = NewNode;
    NewNode -> Prev = prev_node;

    if(NewNode -> Next != NULL){
        NewNode -> Next -> Prev = NewNode;
    }
}

void PrintDoublyLL(Node *n){
    while(n != NULL){
        cout << n -> Data << " ";
        n = n -> Next;
    }
}

void solve(){
    Node *head = NULL;
    FrontInsert(&head , 10);
    FrontInsert(&head , 30);
    MiddleInsert(head -> Next, 20);
    PrintDoublyLL(head);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}
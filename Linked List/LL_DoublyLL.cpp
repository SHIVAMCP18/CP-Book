#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

/* ------ Doubly Linked List Node ----- */
struct Node{
    int data;
    Node *prev;
    Node *next;
};

/* ------ Insert Node in doubly Linked List --------*/
void push(Node **head_ref , int newData){
    Node *newNode = new Node();
    newNode -> data = newData;
    newNode -> next = *head_ref;
    newNode -> prev = NULL;

    if((*head_ref) != NULL){
        (*head_ref) -> prev = newNode;
    }

    (*head_ref) = newNode;
}

void PrintLinkedList(Node *n){
    while(n != NULL){
        cout << n -> data << " ";
        n = n -> next;
    }
}

void solve(){
    Node *head = NULL;
    push(&head , 13);
    push(&head , 19);
    push(&head , 12);
    push(&head , 03);

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
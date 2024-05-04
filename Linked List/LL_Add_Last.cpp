#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

struct Node{
    int data;
    Node *next;
};

void Add_Last_LL(Node **head_ref , int newData){
    Node *newNode = new Node();
    newNode -> data = newData;
    newNode -> next = NULL;

    Node *last = *head_ref;

    if(*head_ref == NULL){
        *head_ref = newNode;
        return;
    }

    while(last -> next != NULL){
        last = last -> next;
    }

    last -> next = newNode;
}

void PrintLinkedList(Node *n){
    while(n != NULL){
        cout << n -> data << " ";
        n = n -> next;
    }
}

void solve(){
    Node *head = NULL;
    Add_Last_LL(&head , 5);
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

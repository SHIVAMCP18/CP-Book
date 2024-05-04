//Write a program to Print Linked List
// 1) Iterative
// 2) Recursive
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

struct Node{
    int data;
    Node *next;
};

//Iterative
void PrintLinkedList(Node *n){
    while(n != NULL){
        cout << n -> data << " ";
        n = n -> next;
    }
}

void Front_Push(Node **head_ref , int newData){
    Node *newNode = new Node();
    newNode -> data = newData;
    newNode -> next = *head_ref;
    *head_ref = newNode;
}


// Recursive
void Recursive(Node *head){
    Node *temp = head;
    if(temp == NULL) return;
    cout << temp -> data << " ";
    return Recursive(temp -> next);
}

void solve(){
    Node *head = NULL;
    Front_Push(&head , 23319);
    Front_Push(&head , 23013);
    Front_Push(&head , 23003);

    PrintLinkedList(head); //23003 23013 23319
    cout << endl;
    Recursive(head); //23003 23013 23319 
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

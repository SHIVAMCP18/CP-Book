// There is a singly-linked list head and we want to delete a node node in it.

// You are given the node to be deleted node. You will not be given access to the first node of head.

// Input: head = [4,5,1,9], node = 5
// Output: [4,1,9]
// Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.

// Input: head = [4,5,1,9], node = 1
// Output: [4,5,9]
// Explanation: You are given the third node with value 1, the linked list should become 4 -> 5 -> 9 after calling your function.

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

struct Node{
    int data;
    Node *next;
};

// Node Insert 
void FrontInsert(Node **head_ref , int newData){
    Node *newNode = new Node();
    newNode -> data = newData;
    newNode -> next = *head_ref;
    *head_ref = newNode;
}

// Delete The Node
void deleteNode(Node* node) {
    Node *Curr = node -> next;
    node -> data = Curr -> data;
    node -> next = Curr -> next;
}

// LL Print
void PrintLinkedList(Node *n){
    while(n != NULL){
        cout << n -> data << " ";
        n = n -> next;
    }
}

void solve(){
    Node *head = NULL;

    //  Linked List Input
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        FrontInsert(&head , x);
    }

    deleteNode(head -> next);
    
    PrintLinkedList(head);   
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
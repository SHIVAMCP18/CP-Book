// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well
// Input: head = [1,1,2]
// Output: [1,2]

// Input: head = [1,1,2,3,3]
// Output: [1,2,3]
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

Node *deleteDuplicates(Node *head){
    Node *curr = head;
    while(curr != NULL && curr -> next != NULL){
        if(curr -> data == curr -> next -> data){
            Node *Temp = curr -> next;
            curr -> next = Temp -> next;
            delete(Temp);
        }
        else{
            curr = curr -> next;
        }
    }
    return head;
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

    head = deleteDuplicates(head);
    
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
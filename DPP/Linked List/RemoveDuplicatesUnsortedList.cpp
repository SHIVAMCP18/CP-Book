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
    unordered_set<int> seen;
    Node *curr = head;

    if(curr == NULL) return head;
    else seen.insert(curr -> data);
    while(curr -> next != NULL){
        if(seen.find(curr -> next -> data) != seen.end()){
            curr -> next = curr -> next -> next;
        }
        else{
            seen.insert(curr -> next -> data);
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
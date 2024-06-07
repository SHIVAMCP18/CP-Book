// Two Linked Lists are identical when they have the same data and the arrangement of data is also the same. Write a function to check if the given two linked lists are identical. 
// Input: a = 1->2->3->4, b = 1->2->3->4
// Output: Identical

// Input: a = 1->3->5->2, b = 1->3->4->6
// Output: Not Identical
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

struct Node{
    int data;
    Node *next;
};

void InsertFront(Node **head_ref , int newData){
    Node *newNode = new Node();
    newNode -> data = newData;
    newNode -> next = *head_ref;
    *head_ref = newNode;
}

//Function to check if 2 linked lists are identical
bool areIdentical(struct Node *head1 , struct Node *head2){
    while(head1 != NULL && head2 != NULL){
        if(head1 -> data != head2 -> data) return false;
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    return (head1 != NULL || head2 != NULL) ? false : true;
}

void solve(){
    Node *head1 = NULL;
    Node *head2 = NULL;

    //Linked List Size
    int n , m;
    cin >> n >> m;

    //Linked List Input
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        InsertFront(&head1 , x);
    }
    for(int i = 0 ; i < m ; i++){
        int x;
        cin >> x;
        InsertFront(&head2 , x);
    }

    //Output
    if(areIdentical(head1 , head2)){
        cout << "True" << endl;
    }
    else cout << "False" << endl;
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
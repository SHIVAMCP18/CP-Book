// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Example 1:
// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]

// Example 2:
// Input: list1 = [], list2 = []
// Output: []

// Example 3:
// Input: list1 = [], list2 = [0]
// Output: [0]

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

struct Node{
    int data;
    Node *next;
    Node() : data(0) , next(NULL) {}
    Node(int d) : data(d) , next(NULL) {}
};

void LastInsert(Node **head_ref , int newData){
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

Node* mergeTwoLists(Node *list1, Node *list2){
    Node *head = new Node(0);
    Node *curr = head;

    while(list1 != NULL && list2 != NULL){
        if(list1 -> data <= list2 -> data){
            curr -> next = list1;
            list1 = list1 -> next;
        }
        else{
            curr -> next = list2;
            list2 = list2 -> next;
        }
        curr = curr -> next;
    }
    if(list1 != NULL) curr -> next = list1;
    if(list2 != NULL) curr -> next = list2;

    Node *result = head -> next;
    delete(head);
    return result;
}

// LL Print
void PrintLinkedList(Node *n){
    while(n != NULL){
        cout << n -> data << " ";
        n = n -> next;
    }
}

void solve(){
    Node *list1 = NULL;
    Node *list2 = NULL;
    Node *head = NULL;

    //  Linked List Input
    int n , m;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        LastInsert(&list1 , x);
    }
    for(int i = 0 ; i < m ; i++){
        int x;
        cin >> x;
        LastInsert(&list2 , x);
    }

    head = mergeTwoLists(list1 , list2);

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
//Write a program to delete a Node 
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

void DeleteNode(Node **head_ref , int key){
    Node *prev , *temp;
    temp = *head_ref;

    if(temp != NULL && temp -> data == key){
        *head_ref = temp -> next;
        free(temp);
        return;
    }

    while(temp != NULL && temp -> data != key){
        prev = temp;
        temp = temp -> next;
    }

    if(temp == NULL) return;

    prev -> next = temp -> next;
    free(temp);
}

void Front_Push(Node **head_ref , int newData){
    Node *newNode = new Node();
    newNode -> data = newData;
    newNode -> next = *head_ref;
    *head_ref = newNode;
}

void solve(){
    Node *head = NULL;
    Front_Push(&head , 23319);
    Front_Push(&head , 23013);
    Front_Push(&head , 23003);

    PrintLinkedList(head);//23003 23013 23319
    cout << endl;

    DeleteNode(&head , 23003);//23013 23319
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

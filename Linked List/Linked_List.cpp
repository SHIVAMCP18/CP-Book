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

void solve(){
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head -> data = 5;
    head -> next = second;

    second -> data = 1;
    second -> next = third;

    third -> data = 3;
    third -> next = NULL;

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

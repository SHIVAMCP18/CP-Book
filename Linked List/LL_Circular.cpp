#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

struct Node{
    int data;
    Node *next;
};

void PrintCircularList(Node *first){
    Node *temp = first;

    if(first != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;

        while(temp != first){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
    }
}

void solve(){
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = fourth;

    fourth -> data = 4;
    fourth -> next = head;

    PrintCircularList(head);
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

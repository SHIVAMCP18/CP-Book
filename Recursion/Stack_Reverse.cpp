#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

//Approach-1 (Using O(N) Auxiliary Space 
//Time - Complexity : O(N^2)
//Space - Complexity : O(N) Auxiliary Space
void reverse(stack<int> &st){

    if(st.empty()){
        return;
    }
    int top = st.top();
    st.pop();
    reverse(st);

    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st.push(top);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}

//Approach-2 (Using O(1) Auxiliary Space)
//Time - Complexity : O(N^2)
//Space - Complexity : O(N) Auxiliary Space
void InsertAtBottom(stack<int> &St , int top_element){

    if(St.empty()){
        St.push(top_element);
        return;
    }
    int top = St.top();
    St.pop();
    InsertAtBottom(St , top_element);
    St.push(top);
}

void reverse1(stack<int> &st){
    if(st.empty()){
        return;
    }
    int top = st.top();
    st.pop();
    reverse1(st);
    InsertAtBottom(st , top);
}

//Print the Stack
void printStack(stack<int> st) {
    if (st.empty())
        return;
    int top = st.top();
    st.pop();
    printStack(st);
    cout << top << " ";
}

void solve() {
    int n;
    cin >> n; // stack - size
    stack<int> st;
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        st.push(x); // stack input
    }
    reverse(st); // Approach-1
    printStack(st);
    cout << endl;

    reverse1(st); // Approach-2
    printStack(st);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    //cin >> T;
    while (T--)
        solve();
}

#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long

void insert(stack<int> &st , int temp) {
    if(st.size() == 0) {
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st , temp);
    st.push(val);
}

void revStack(stack<int> &st) {
    if(st.size() == 1) {
        return;
    }
    int temp = st.top();
    st.pop();
    revStack(st);
    insert(st , temp);
}

void solve() {
    stack<int> st;
    
    for(int i = 0 ; i < 4 ; i++) {
        int x;
        cin >> x;
        st.push(x);
    }
    revStack(st);
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int T = 1;
    // cin >> T;
 
    while(T--)
        solve();
}
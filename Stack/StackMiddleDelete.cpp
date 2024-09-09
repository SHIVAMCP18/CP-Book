#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long

void solve(stack<int> &st , int k) {
    if(k == 1) {
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    solve(st , k - 1);
    st.push(temp);
    return;
}

stack<int> stackMiddleDelete(stack<int> &st) {
    if(st.size() == 0) {
        return st;
    }
    int k = (st.size() / 2) + 1;
    solve(st , k);
    return st;
}

void solve() {
    stack<int> st;
    
    for(int i = 0 ; i < 4 ; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    stackMiddleDelete(st);

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
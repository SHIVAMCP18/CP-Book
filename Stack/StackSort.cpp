#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long

void insertStack(stack<int> &st , int temp) {

    if(st.size() == 0 || st.top() <= temp) {
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insertStack(st , temp);
    st.push(val);
    return;
}

void sortStack(stack<int> &st) {
    if(st.size() == 1) return;
    int temp = st.top();
    st.pop();
    sortStack(st);
    insertStack(st , temp);
}

void solve() {

    stack<int> st;
    st.push(10);
    st.push(2);
    st.push(9);
    sortStack(st);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
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
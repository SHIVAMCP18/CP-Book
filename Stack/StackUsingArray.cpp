#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long

int Top = -1;
vector<int> stackArray(4);

void push(int x) {
    if(Top >= 3) {
        cout << "Stack Overflow";
        return;
    }
    Top++;
    stackArray[Top] = x;
}

void top() {
    if(Top == -1) {
        cout << "Stack Is Empty";
        return;
    }
    cout << stackArray[Top];
}

void pop() {
    if(Top == -1) {
        cout << "Stack Is Empty";
    }
    Top--;
}

void solve() {
    push(1);
    push(2);
    push(3);
    push(4);
    // push(5);
    // top();
    pop();

    for(int i = 0 ; i <= Top ; i++) {
        cout << stackArray[i] << " ";
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
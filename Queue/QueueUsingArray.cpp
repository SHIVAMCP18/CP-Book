#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long

int currSize = 0;
int     Start = -1;
int End = -1;

int queueArray[4];

void push(int x) {
    if(currSize == 3) {
        cout << "Queue Overflow";
        return;
    } 
    if(currSize == 0) {
        Start = 0;
        End = 0;
    }
    else {
        End = (End + 1) % 4;
    }
    queueArray[End] = x , currSize++;
}

void pop() {
    if(currSize == 0) {
        cout << "Queue Is Empty";
        return;
    }
    if(currSize == 1) {
        Start = End = -1;
    }
    else Start = (Start + 1) % 4;
    currSize--;
}

void front() {
    if(currSize == 0) {
        cout << "Queue Is Empty";
        return;
    }
    cout << queueArray[Start];
}

void size() {
    cout << currSize; 
    return;
}

void solve() {
    push(4);
    push(3);

    size();
    front();
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
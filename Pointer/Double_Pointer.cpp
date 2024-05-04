#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void DoublePointer(){
    int val = 10;

    int *ptr1 = &val;
    int **ptr2 = &ptr1;

    cout << "Address: " << &val << " Value: " << val << endl;
    cout << "Address: " << &ptr1 << " Value: " << *ptr1 << endl;
    cout << "Address: " << &ptr2 << " Value: " << **ptr2 << endl;
}

void MemoryAllocationtoDoublePointer(){
    int **double_ptr;
    double_ptr = new int*;
    *double_ptr = new int;
    **double_ptr = 30;
    cout << **double_ptr;
}

void solve(){
    DoublePointer();
    MemoryAllocationtoDoublePointer();
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

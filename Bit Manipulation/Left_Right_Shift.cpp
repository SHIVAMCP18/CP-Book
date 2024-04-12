#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long


int left_shift(int a , int n){
    return (a << n);  // Left_Shift (a << n) == a * (2^n)
}
int right_shift(int a , int n){
    return (a >> n); // Right_Shift (a >> n) == a / (2^n)
}
void solve() {
    cout << left_shift(5,1) << " " << left_shift(5,2);
    cout << endl;
    cout << right_shift(5,1) << " " << right_shift(5,2);
}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int t = 1;
        //cin >> t;
        while(t--)
           solve();
}
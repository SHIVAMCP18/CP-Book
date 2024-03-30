#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
    
//Time Complexity - For Finding Frequency

//Using Map - O(Nlog(N))
//Using Unordered_map - O(N)
//Using lower-upper_bound - O(log(N))
//Using For-loop - O(N)
//Using Hashmap - O(N)

void solve() {
    int a[6] = {1,1,2,3,3,3}; //Sorted - Array
    cout << upper_bound(a,a+6,3) - lower_bound(a,a+6,3); //Pre-Defined Functions
}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int t = 1;
        cin >> t;
        while(t--)
            solve();
}



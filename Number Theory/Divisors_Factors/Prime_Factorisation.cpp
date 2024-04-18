#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long

void solve() {
    int n;
    cin >> n;
    //Time - Complexity - O(N)
    vector<int> prime_factors;
    for(int i = 2 ; i <= n ; i++){
        while(n % i == 0){
            prime_factors.push_back(i);
            n /= i;
        }
    }
    for(auto prime : prime_factors){
        cout << prime << " ";
    }
    cout << endl;
    //O(sqrt(N))
    int n1;
    cin >> n1;
    vector<int> prime_factors1;
    for(int i = 2 ; i * i <= n1 ; i++){
        while(n1 % i == 0){
            prime_factors1.push_back(i);
            n1 /= i;
        }
    }
    if(n1 > 1){
        prime_factors1.push_back(n1);
    }
    for(auto prime : prime_factors1){
        cout << prime << " ";
    }
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
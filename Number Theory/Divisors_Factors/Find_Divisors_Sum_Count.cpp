#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long

void solve() {
    int n;
    cin >> n;
    int sum = 0 , ct = 0;
    //O(N) 
    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            cout << i << endl;//Print the divisors 
            ct++; // count of the divisors
            sum+= i; // Calculate sum of the divisiors
        }
    }
    cout << sum << " " << ct;

    cout << endl;

    //O(sqrt(N))
    int ct1 = 0 , sum1 = 0;
    for(int i = 1 ; i * i <= n ; i++){
        if(n % i == 0){
            cout << i << " " << n / i << endl;
            ct1++;
            sum1+= i;
            if(n / i != i){
                ct1++;
                sum1+= n / i;
            }
        }
    }
    cout << sum1 << " " << ct1;
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
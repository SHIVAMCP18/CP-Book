#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Customer{
    string name;
    int *balance;

public:
    Customer(){
        name = "SHIVAM";
        balance = new int();
        *balance = 100000;
        cout << "Constructor Is Called" << endl;
    }
    ~Customer(){
        delete balance;
        cout << "Destructor Is Called";
    }
};

void solve(){
    Customer A1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}

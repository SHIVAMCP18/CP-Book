#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Friends{
    string name;
public:
    void PrintName(){
        cout << "Samarth" << endl;
    }
};

class Friend : public Friends{
    int age;

    void PrintAge(){
        cout << "18" << endl;
    }
};

void solve(){
    Friend *F = new Friend();
    F -> PrintName();
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

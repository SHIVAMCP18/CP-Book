#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Area{
public:
    double CalculateArea(double r){
        return 3.14 * pow(r , 2);
    }

    double CalculateArea(double l , double b){
        return l * b;
    }
};

void solve(){
    Area A1;
    cout << A1.CalculateArea(1) << endl;

    Area A2;
    cout << A2.CalculateArea(1 , 2) << endl;
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

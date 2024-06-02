#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Student{
public:
    void Print(){
        cout << "I AM STUDENT\n";
    }
};

class Male{
public:
    void MalePrint(){
        cout << "I AM MALE\n";
    }
};

class FeMale{
public:
    void FeMalePrint(){
        cout << "I AM FEMALE\n";
    }
};

class Boy : public Student , public Male{
public:
    void BoyPrint(){
        cout << "I AM BOY\n";
    }
};

class Girl : public Student , public FeMale{
public:
    void GirlPrint(){
        cout << "I AM Girl\n";
    }
};

void solve(){
    Girl G1;
    G1.Print();

    Boy B1;
    B1.BoyPrint();
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

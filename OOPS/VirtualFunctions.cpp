#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Animal{
public:
    virtual void speak(){
        cout << "HU.. HU.." <<endl;
     }
     // Pure Virtual Class or Abstarct Class
     // Virtual void speak() = 0;
};

class Dog : public Animal{
public:
    void speak(){
        cout << "Bark" << endl;
    }
};

void solve(){
    Animal *P = new Dog();
    P -> speak();
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

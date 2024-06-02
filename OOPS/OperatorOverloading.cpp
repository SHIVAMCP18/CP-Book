#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Complex{
    int real , img;
    Complex(){

    }
public:
    Complex(int real , int img){
        this ->real = real;
        this -> img = img;
    }

    void Display(){
        cout << real << " +i" << img << endl;
    }

    Complex operator +(Complex C){
        Complex ans;
        ans.real = real + C.real;
        ans.img = img + C.img;
        return ans;
    }
};

void solve(){
    Complex C1(3 , 4);
    Complex C2(4 , 6);

    Complex C3 = C1 + C2;
    C3.Display();
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

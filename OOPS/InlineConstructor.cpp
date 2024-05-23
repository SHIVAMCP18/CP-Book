#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Customer{

public:
    string name;
    int account_number;
    int balance;

    //Default Constructor
    Customer(){
        name = "SHIVAM";
        account_number = 3927520;
        balance = 500000;
    }
    
    //Inline Constructor 
    inline Customer(string s , int a , int b) : name(s) , account_number(a) , balance(b){
        
    }

    //Constructor Overloading -> Same name but different Arguments
    Customer(string s , int a){
        name = s;
        account_number = a;
    }
    void Display(){
        cout << name << " " << account_number << " " << balance << endl;
    }
};

void solve() {
    Customer C1;
    Customer C2("SATYAM" , 4759102 , 987654);
    Customer C3("OM" , 1234567);
    C1.Display();
    C2.Display();
    C3.Display();
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

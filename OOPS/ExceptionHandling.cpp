#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Customer{
    string name;
    int balance , account_number;
public:
    Customer(string name , int balance , int account_number){
        this -> name = name;
        this -> balance = balance;
        this -> account_number = account_number;
    }

    //Deposit
    void Deposit(int amount){
        if(amount > 0){
            balance += amount;
            cout << amount << " Is Credited Successfully\n";
        }
        else{
            throw "Amount Should Be Greater Than 0";
        }
    }

    //Withdraw
    void Withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << amount << " Is Debited Successfully\n";
        }
        else if(amount < 0){
            throw "Amount Should Be Greater Than 0\n";
        }
        else{
            throw "Your Balance Is Low\n";
        }
    }
};

void solve(){
    Customer C1("SHIVAM" , 1000 , 3213);
    try{
        C1.Deposit(900);
        C1.Deposit(100);
        C1.Withdraw(2100);
    }
    catch(const char *e){
        cout << "Exception Occured: " << e << endl;
    }
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

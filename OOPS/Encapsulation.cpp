#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Customer{
    string name;
    int balance;
    int age;
public:
    Customer(string name , int balance , int age){
        this -> name = name;
        this -> balance = balance;
        this -> age = age;
    }
    void Deposit(int amount){
        if(amount > 0){
            balance += amount;
        }
        else{
            cout << "INVALID AMOUNT" << endl;
        }
    }
    void Withdraw(int amount){
        if(amount <= balance && amount > 0){
            balance -= amount;
        }
        else{
            cout << "INVALID AMOUNT" << endl;
        }
    }
    void Display(){
        cout << name << " " << balance << " " << age << endl;
    }
};

void solve(){
    Customer A1("SHIVAM" , 1000 , 18);
    Customer A2("SATAYM" , 100000 , 18);
    A1.Deposit(10);
    A2.Deposit(10000);

    A1.Display();
    A2.Display();

    A1.Withdraw(500);
    A2.Withdraw(-10);

    A1.Display();
    A2.Display();
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

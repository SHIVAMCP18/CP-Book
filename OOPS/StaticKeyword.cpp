#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Customer{
    string name;
    int account_number;
    int balance;
    static int Total_Balance;
public:
    static int Total_Customer;

    Customer(string name , int account_number , int balance){
        this -> name = name;
        this -> account_number = account_number;
        this -> balance = balance;
        Total_Customer++;
        Total_Balance += balance;
    }
    static int returntotalbalance(){
        return Total_Balance;
    }
    void display(){
        cout << name << " " << account_number << " " << balance << " " << Total_Customer << endl;
    }
};

int Customer :: Total_Customer = 0;
int Customer :: Total_Balance = 0;

void solve(){
    Customer A1("shivam" , 1 , 1000);
    Customer A2("Satyam" , 2 , 1000000000);
    A1.display();
    A2.display();
    Customer :: Total_Customer = 5;
    cout << Customer :: Total_Customer << endl;
    cout << A2.returntotalbalance();
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

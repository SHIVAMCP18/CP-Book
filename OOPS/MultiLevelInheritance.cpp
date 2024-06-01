#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Person{
protected:
    string name;
public:
    void Introduce(){
        cout << "Hello My Name Is: " << name << endl;
    }
};

class Employee : public Person{
protected:
    int salary;
public:
    void Monthly_Salary(){
        cout << "My Monthly Salary Is: " << salary << endl;
    }
};

class Manager : public Employee{
public:
    string department;

    Manager(string name , int salary , string department){
        this -> name = name;
        this -> salary = salary;
        this -> department = department;
    }
    void Work(){
        cout << "I Am Leading The Department " << department << endl;
    }
};

void solve(){
    Manager A1("OM" , 1000 , "Finance");
    A1.Work();
    A1.Monthly_Salary();
    A1.Introduce();
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

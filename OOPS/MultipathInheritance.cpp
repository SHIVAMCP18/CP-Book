#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Human{
public:
    string name;
    void Display(){
        cout << "My Name Is " << name << endl;
    }
};

class Engineer : public virtual Human{
public:
    string Specialization;
};

class Youtuber : public virtual Human{
public:
    int subscribers;
};

class CodeTeacher : public Engineer , public Youtuber{
public:
    int Salary;
    
    CodeTeacher(string name , string Specialization , int subscribers , int Salary){
        this -> name = name;
        this -> Specialization = Specialization;
        this -> subscribers = subscribers;
        this -> Salary = Salary;
    }
};

void solve(){
    CodeTeacher A1("SHIVAM" , "CSE" , 2 , 10);
    A1.Display();
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

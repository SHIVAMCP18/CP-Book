#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Human{
public:
    string name;
    int age , roll_number;
};


// Public
class Student : public Human{
    int marks , fees;
public:
    void Display(){
        cout << name << " " << age << " " << roll_number << endl;
    }
};


// Protected
class Student1 : protected Human{
    int marks , fees; 

public:
    void fun(string name , int age , int roll_number){
        this -> name = name;
        this -> age = age;
        this -> roll_number = roll_number;
    }
    void Display(){
        cout << name << " " << age << " " << roll_number << endl;
    }
};

void solve(){
    Student A;
    A.name = "SHIVAM";
    A.age = 18;
    A.roll_number = 319;
    A.Display();

    Student1 A1;
    A1.fun("SHIVAM" , 18 , 319);
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

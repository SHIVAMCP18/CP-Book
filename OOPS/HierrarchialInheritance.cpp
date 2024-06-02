#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

class Human{
public:
    string name;
    int Salary , age , roll_number;
};

class Student : public Human{
    int marks , fees; 

public:
    Student(string name , int age , int roll_number){
        this -> name = name;
        this -> age = age;
        this -> roll_number = roll_number;
    }
    void Display(){
        cout << name << " " << age << " " << roll_number << endl;
    }
};

class Teacher : public Human{
    int Salary;
public:
    Teacher(int Salary , string name , int age){
        this -> Salary = Salary;
        this -> name = name;
        this -> age = age;
    }
    void Display(){
        cout << Salary << " " << name << " " << age << " " << endl;
    }
};

void solve(){
    Student S1("SHIVAM" , 19 , 319);
    S1.Display();
    Teacher T1(100 , "Om" , 20);
    T1.Display();
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

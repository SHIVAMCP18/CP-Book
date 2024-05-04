#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

//Void Pointer
void Use_Voidpointer_IncreaseByOne(void *data , int ptrsize){
    if(ptrsize == sizeof(char)){
        char *ptrchar;
            //Typecast data to a char pointer 
        ptrchar = (char*)data;
        (*ptrchar)++;
    }
    else if(ptrsize == sizeof(int)){
        int *ptrint;
        //Typecast data to a int pointer
        ptrint = (int*)data;
        (*ptrint)++;
    }
}

void VoidPointer(){
    int num = 10;
    char c = 'r';

    Use_Voidpointer_IncreaseByOne(&num , sizeof(num));
    cout << num;
}

void solve(){

    //Wild - Pointer
    int *ptr_wild; // un - initialized ptr
    cout << *ptr_wild << endl; // you might get compiler error ..


    //Dangling Pointer
    int *ptr_dang = new int(10);
    delete ptr_dang;
    ptr_dang = NULL; //-- removing dangling pointer
    //cout << *ptr_dang;


    //Pointers with constant
    int val1 = 10;
    int val2 = 20;
    //Constant Pointer
    int * const const_ptr = &val1;
    //const_ptr = &val2; -- this will give an error
    cout << *const_ptr << endl;

    //Pointer to constant
    const int * ptr_to_const = &val1;
    //*ptr_to_const = 15; -- this will give an error
    cout << *ptr_to_const << endl;

    VoidPointer();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}

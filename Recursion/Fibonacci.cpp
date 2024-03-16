#include<bits/stdc++.h>
using namespace std;

int Fib(int a){
	if(a==0 || a==1) return 1;
	return Fib(a-1) * a;
}
int main(){

	int n;
	cin>>n;

	cout<<Fib(n);
}

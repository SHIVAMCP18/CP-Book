	#include<bits/stdc++.h>
	using namespace std;

	int Digit_Sum(int n){
		if(n==0) return 0;
		return Digit_Sum(n/10) + (n%10);
	}

	int main(){

		int n;
		cin>>n;

		cout<<"Digit Sum: "<<Digit_Sum(n);
}

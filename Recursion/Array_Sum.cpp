	#include<bits/stdc++.h>
	using namespace std;

	int Array_Sum(int a[],int n){
		if(n < 0) return 0;
		return Array_Sum(a,n-1) + a[n];
	}

	int main(){

		int n;
		cin>>n;

		int a[n];

		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<"Sum Of Elements: "<<Array_Sum(a,n-1);
	}

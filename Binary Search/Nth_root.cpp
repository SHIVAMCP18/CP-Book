#include<bits/stdc++.h>
using namespace std;

double eps = 1e-9;

double multiply(double M,int n){
	double ans=1;
	for(int i=0;i<n;i++){
		ans *= M; 
	}
	return ans;
}

int main(){
	double x;
	cin>>x;
	int n;
	cin>>n;

	double l=1,r=x;
	double M;

	while(r - l > eps){
		M = l + (r - l) / 2;
		if(multiply(M,n)< x){
			l = M;
		}
		else{
			r = M;
		}
	}
	cout<<setprecision(10)<<l<<endl;

}	

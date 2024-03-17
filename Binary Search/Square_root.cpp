#include<bits/stdc++.h>
using namespace std;

double eps = 1e-7;

int main(){
	double x;
	cin>>x;

	double l=1,r=x;
	double M;

	while(r - l > eps){
		M = l + (r - l) / 2;
		if(M * M < x){
			l = M;
		}
		else{
			r = M;
		}
	}
	cout<<setprecision(10)<<l<<endl;

}	

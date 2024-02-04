#include<bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	int target;
	cin>>target;
	int L=0,R= n-1;
	int M;

	while(R-L>1)
	{
		M = L + (R-L)/2;
		if(arr[M] < target)
		{
			L = M + 1;
		}
		else
		{
			R=M;
		}
	}
	if(arr[L] == target)
	{
		cout<<L<<endl;
	}
	else if(arr[R] == target)
	{
		cout<<R<<endl;
	}	
	else
	{
		cout<<"Not Found"<<endl;
	}
}

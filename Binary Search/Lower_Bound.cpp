#include<bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int L=0,R=n-1,M,target,ans;
	cin>>target;


	while(L<=R)
	{
		M= L + (R - L)/2;
		if(arr[M]>=target)
		{
			ans = M;
			R = M - 1;
		}
		else
		{
			L = M + 1;
		}
	}
	return ans;
}

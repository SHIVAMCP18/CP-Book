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


//Another Method For The Binaray Search(Without C++ STL)

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

	int L=0,R=n-1,M,target;
	cin>>target;


	while(L<=R)
	{
		M= L + (R - L)/2;
		if(arr[M]==target)
				{
					return M;
				}
		else if(arr[M]<target)
		{
			L = M + 1;
		}

		else
		{
			R = M - 1;
		}
	}
	return  -1;
}

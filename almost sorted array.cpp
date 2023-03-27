#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	vector<int>v(n);
	for(auto &i:v)cin>>i;
	int l=0,r=n-1,temp=-1;
	//for(auto i:v)cout<<i<<endl;
	while(l<=r){
		int mid = (l+r)/2;
		//cout<<mid<<endl;
		if(v[mid]==x){
			temp = mid;
			break;
		}
		if(mid-1>=0 && v[mid-1]==x){
			temp = mid-1;
			break;
		}
		 if(mid+1<n && v[mid+1]==x){
			temp = mid+1;
			break;
		}
		 
		else if(v[mid]>x)
		r = mid-2;
		else
		l = mid+2;
		
	}
	
	cout<<temp<<endl;
	
}


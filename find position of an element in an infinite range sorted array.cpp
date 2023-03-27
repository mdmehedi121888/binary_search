#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,x;
  cin>>n>>x;
  vector<int>v(n);
  for(auto &i:v)cin>>i;
  int l=0,r=1,temp=-1;
  while(l<=r){
  	int mid= (l+r)/2;
  	if(v[mid]==x){
  		temp = mid;
  		break;
	  }
	  if(v[r]<x)
	  {
	  	l = r;
	  	r = r*2;	
	  }
	else if(v[mid]>x){
		r = mid - 1;
	}
	else
	l = mid+1;
  }
  cout<<temp<<endl;
}


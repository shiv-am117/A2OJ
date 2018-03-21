#include<bits/stdc++.h>
using namespace std;

   int main()
    {
    	int y,k,n,i,flag=0;
    	cin>>y>>k>>n;
    	for(i=1;;i++){
    		if(i*k>y&&i*k<=n) {flag=1;cout<<k*i-y<<" ";}
    		if(i*k>n) break;
    	}
    	
    	if(flag==0)cout<<-1;
    }
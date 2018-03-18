#include<bits/stdc++.h>
using namespace std;
   int main()
    {
    	int n,i,min=INT_MAX;
    	cin>>n;
    	int a[n];
    	for(i=0;i<n;i++) cin>>a[i];
    		

    		sort(a,a+n);
    	for(i=0;i<n-1;i++) {
    		if(a[i+1]-a[i]<min&&a[i+1]-a[i]!=0) min=a[i+1]-a[i];

    	

    }
    	if(min==INT_MAX) min=a[0];
    	cout<<min*n;
    }
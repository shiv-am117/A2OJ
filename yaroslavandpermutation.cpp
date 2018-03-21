#include<bits/stdc++.h>
using namespace std;

   int main()
    {
    	int n,i,c=1,r;
    	cin>>n;
    	int a[n];
    	for(i=0;i<n;i++){
    		cin>>a[i];

    	}
    	if(n%2==0) r=n/2;
    	else r=(n+1)/2;
    	sort(a,a+n);
    	for(i=1;i<n;i++){
    		if(a[i]!=a[i-1]) c=1;
    		else c++;
    		if(c>r) break;
    	}
   if(i!=n)cout<<"NO";
    	else cout<<"YES";
    }
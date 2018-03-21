#include<bits/stdc++.h>
using namespace std;
   int main()
    {
    	int n,i;
    	cin>>n;
    	string s[n],a,b;int c1=0,c2=0;
    	for(i=0;i<n;i++) {
    		cin>>s[i];
    		if(i==0) a=s[i];
    		else if(s[i]!=a) b=s[i];
    	}
    	for(i=0;i<n;i++){
    		if(s[i]==a) c1++;
    		else c2++;
    	}
    	if(c1>c2)cout<<a;
    	else cout<<b;
    }
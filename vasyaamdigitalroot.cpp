#include<bits/stdc++.h>
using namespace std;

   int main()
    {int k,d,i;

    	cin>>k>>d;
    	if(k==1) {cout<<d; return 0;}
    	if(d>1){
    		cout<<1;
    		for(i=1;i<=k-2;i++) cout<<0;
    			cout<<d-1;
    		return 0;
    	}
    	if(d==1){
    		cout<<1;
    		for(i=1;i<=k-2;i++) cout<<0;
    			cout<<9;
    		return 0;
    	}
    	
    	else cout<<"No solution";
    }
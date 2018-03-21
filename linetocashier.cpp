#include<bits/stdc++.h>
using namespace std;

   int main()
    {int n,i,j,b;
    	cin>>n;
    	int c[n],ans[n];
    	for(i=0;i<n;i++){
    		cin>>c[i];
    	}

    	for(i=0;i<n;i++){
    		ans[i]=15*c[i];
    		for(j=0;j<c[i];j++){

    			cin>>b;
    			ans[i]=ans[i]+b*5;
    		}
    		
    	}
    	cout<<*min_element(ans,ans+n);
    }
#include<bits/stdc++.h>
using namespace std;
   int main()
    {
    	int n,i,j,min=INT_MAX,d;
    	cin>>n;
    	int a[n];
    	for(i=0;i<n;i++) cin>>a[i];
    		
    		sort(a,a+n);
    	min=a[0];
    	while(count(a,a+n,min)!=n){
    	for(i=0;i<n;i++){
    		
    		if(a[i]>min){
    			if(a[i]%min==0) a[i]=min;
    			else {a[i]=a[i]%min; min=a[i];}
    		} 
    	}
    }
    	

    
    	
    	cout<<min*n;
    }
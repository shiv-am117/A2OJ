#include<bits/stdc++.h>
using namespace std;
   int main()
    {
    	int a,b,c,flag=0;
    	cin>>a>>b>>c;
    	int i;
    	for(i=1;i<=sqrt(a);i++){
    		if(a%i==0){
    			if((b%i==0&&b/i*(a/i)==c)) {flag=1;break;}
    			else if((c%i==0&&c/i*(a/i)==b)) {flag=2;break;}
    		}}
    	
    		if(flag==1) cout<<4*i+4*(a/i)+4*b/i;
    		else cout<<4*i+4*(a/i)+4*c/i;
    	}
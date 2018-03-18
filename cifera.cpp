#include<bits/stdc++.h>
using namespace std;
   int main()
    {
    	double n,test;
    	int c=0;
    	cin>>n>>test;
    	double i=test;
    	while(i>=n){
    		c++;
    		i=i/n;
    	}
    	if(i==1) cout<<"YES"<<endl<<c-1;
    	else cout<<"NO";

    }
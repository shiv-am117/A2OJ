#include<bits/stdc++.h>
using namespace std;

   int main()
    {
    	int n,i,r,d=0;
    	cin>>n;
    	if(n==0) {cout<<"O-|-OOOO"; return 0;}
    	while(n>0){
    		r=n%10;
    		d=r;
    		if(r>=5) {cout<<"-O|";d=r-5;}
    		else cout<<"O-|";
    		for(i=1;i<=d;i++){
    			cout<<"O";}
    			cout<<'-';
    			for(i=1;i<5-d;i++){
    			cout<<"O";
    		}
    		n=n/10;
    		cout<<endl;

    	}
    }
#include<bits/stdc++.h>
using namespace std;
   int main()
    {
    	string a,b;
    	cin>>a>>b;
    	int i,l,count=0;
    	l=b.length();
    	for(i=0;i<l;i++){
    		if(a[count]==b[i]) count++;
    	}
    	cout<<count+1;
    }
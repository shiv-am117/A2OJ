#include<bits/stdc++.h>
using namespace std;

   int main()
    {
    	int n,i,j;
    	cin>>n;
    	char a[4][4];int c[10];
    	fill(c,c+10,0);
    	for(i=0;i<4;i++){
    		for(j=0;j<4;j++) {cin>>a[i][j];
    			if(a[i][j]=='.') continue;
    			else c[a[i][j]-'0']++;
    		}
    	}
    	
    	if(2*n>=*max_element(c,c+10)) cout<<"YES";
    	else cout<<"NO";

    }
#include<bits/stdc++.h>
using namespace std;
   int main()
    {int n,m,i,j,c;
    	cin>>n>>m;
    	char a[n][m];
    	for(i=0;i<n;i++){
    		for(j=0;j<m;j++){cin>>a[i][j];}
    	}
    for(i=0;i<n;i++){if(i%2==0) c=1;
    	else c=-1;
    	for(j=0;j<m;j++){
    		if(a[i][j]=='.'){if(c==1) a[i][j]='B';  else a[i][j]='W';c=c*-1;}
    		else c=c*-1;
    	}
    }
    for(i=0;i<n;i++){
    		for(j=0;j<m;j++){cout<<a[i][j];}
    			cout<<endl;
    	}
}
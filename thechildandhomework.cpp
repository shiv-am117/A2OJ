#include<bits/stdc++.h>
using namespace std;

   int main()
    {
    	string a[4];int l[4],c=0,ans,i,j;
    	cin>>a[0]>>a[1]>>a[2]>>a[3];
    	l[0]=a[0].length()-2;
    	l[1]=a[1].length()-2;
    	l[2]=a[2].length()-2;
    	l[3]=a[3].length()-2;

    	for(i=0;i<4;i++){
    		for(j=0;j<4;j++){
    			if(j==i) continue;
    			
    			if((l[i]<2*l[j])) break;

    		}
    		if(j==4||(i==3&&j==4)) {ans=i;c++;}
    	}
    

    if(c<=1){
    	for(i=0;i<4;i++){
    		for(j=0;j<4;j++){
    			if(j==i) continue;
    			if((2*l[i]>l[j])) break;

    		}
    		if(j==4||(i==3&&j==4)) {ans=i;c++;}
    	}

    }
    cout<<c;
    if(c==1) cout<<(char)(65+ans);
    else cout<<'C';
}
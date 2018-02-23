#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int l=s.length(),i,j,k,m,n,flag=0;
	for(i=0;i<l;i++){
		if(s[i]=='h'){
			for(j=i+1;j<l;j++){
		if(s[j]=='e'){
			for(k=j+1;k<l;k++){
		if(s[k]=='l'){
			for(m=k+1;m<l;m++){
		if(s[m]=='l'){
			for(n=m+1;n<l;n++){
		if(s[n]=='o'){
			flag=1;break;
		}
	}
		}
	}
		}
	}
		}
	}
		}
	}
	if(flag==1)cout<<"YES";
	else cout<<"NO";
}
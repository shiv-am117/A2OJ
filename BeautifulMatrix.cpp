#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,r,c,t;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			cin>>t;
			if(t==1) {r=i; c=j;}
		}
	}
	cout<<abs(r-3)+abs(c-3);
}
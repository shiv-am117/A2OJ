#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j;
	cin>>n>>m;
	char p[m];
	for(i=0;i<m;i++) p[i]='.';
	for(i=1;i<=n;i++){
		if(i%2!=0){
		for(j=1;j<=m;j++)
			 cout<<"#";
			cout<<endl;}
			else{
				if((i/2)%2!=0) {for(j=1;j<=m-1;j++)
					cout<<'.';cout<<'#'<<endl;}
				else{cout<<'#';
					for(j=1;j<=m-1;j++)
					cout<<'.';cout<<endl;}
				
			}
		}
	}

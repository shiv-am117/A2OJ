#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int a[n][3];
	int b[3][n];
	for(i=0;i<n;i++){
		for(j=0;j<3;j++) cin>>a[i][j];
	}
for(i=0;i<n;i++){
		for(j=0;j<3;j++) b[j][i]=a[i][j];
	}
	
	for(i=0;i<3;i++){if(accumulate(b[i],b[i]+n,0)!=0) {cout<<"NO";break;}}
		if(i==3) cout<<"YES";
}
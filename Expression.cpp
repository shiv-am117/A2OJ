#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=3,i;
	
	int a[n],total=1;
	for(i=0;i<3;i++) cin>>a[i];
		if(a[0]==1) a[1]=a[1]+1;
	if(a[1]==1) {if(a[0]<a[2]) a[0]=a[0]+1;else a[2]=a[2]+1;}
	if(a[2]==1) a[1]=a[1]+1;
	for(i=0;i<n;i++) {
		total*=a[i];

		}
		cout<<total;
}
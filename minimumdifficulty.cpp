#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,t=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++) cin>>a[i];
		int diff[n-1],min1=1000000,max1;

	for(i=0;i<n-1;i++) diff[i]=a[i+1]-a[i];
		max1=*max_element(diff,diff+n-1);
		for(i=0;i<n-2;i++){
			t=diff[i+1]+diff[i];
			if(t<max1){cout<<max1; return 0;}
			else if(t<min1) min1=t;
		}
	
	cout<<min1;


}
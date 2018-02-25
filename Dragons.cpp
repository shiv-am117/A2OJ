#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,d,i,j,flag,t;
	cin>>s>>d;
	int a[d],b[d];
	for(i=0;i<d;i++){
		cin>>a[i]>>b[i];
	}
	for(i=0;i<d-1;i++){
		for(j=0;j<d-1;j++){
			if(b[j+1]>b[j]){
				swap(b[j+1],b[j]);
				swap(a[j+1],a[j]);
			}
		}
	}
	for(i=0;i<d;i++){flag=0;
		for(j=0;j<d;j++){
			if(a[j]<s&&a[j]>=0) {s=s+b[j]; flag=1; a[j]=-1; break;}
			
		}
		if(flag==0) break;
	}
	if(flag==0) cout<<"NO";
	else cout<<"YES";

	
		
}
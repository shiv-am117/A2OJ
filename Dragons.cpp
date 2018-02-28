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
			if(a[j+1]<a[j]){
				swap(b[j+1],b[j]);
				swap(a[j+1],a[j]);
			}
		}
	}
	for(i=0;i<d;i++){
		
			if(a[i]<s) {s=s+b[i];   }
			else break;
			
		}
		
	
	if(i!=d) cout<<"NO";
	else cout<<"YES";

	
		
}

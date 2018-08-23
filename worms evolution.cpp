#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cin>>n;
int a[n];

map<int,int>pos;
for(i=0;i<n;i++){
	cin>>a[i];
	pos[a[i]]=i+1;
}

	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(pos[a[i]+a[j]]) {
				cout<<pos[a[i]+a[j]]<<" "<<i+1<<" "<<j+1;
				return 0;
			}
		}
	}
	cout<<-1;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	if(n%2!=0) cout<<-1;
	else{
		for(i=0;i<n;i++){
			if(i%2==0) cout<<i+2<<" ";
			else cout<<i<<" ";
		}
	}
}
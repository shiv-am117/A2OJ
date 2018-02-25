#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i;
	cin>>n>>m;
	if(m>n) cout<<-1;
	else{
		if(n%2!=0) n=n+1;
		for(i=n/2;;i++){
			if(i%m==0) {cout<<i; break;}
		}
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,p,q,i;
	cin>>l>>p;int a[p];
	for(i=0;i<p;i++) cin>>a[i];
		cin>>q;
	int b[q];
	for(i=0;i<q;i++) cin>>b[i];
		sort(a,a+p);sort(b,b+q);
		for(i=1;i<=l;i++){
			if(!(binary_search(a,a+p,i))&&!(binary_search(b,b+q,i))) {cout<<"Oh, my keyboard!"; break;}
		}
		if(i==l+1) cout<<"I become the guy.";

}
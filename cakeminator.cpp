#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,r,c,rc=0,cc=0,flag;
	cin>>r>>c;
	char a[r][c];
	
	for(i=0;i<r;i++)
		cin>>a[i];
	

	
	
	for(i=0;i<r;i++){
		if(distance(a[i],find(a[i],a[i]+c,'S'))>=c) rc++; 
	}
for(i=0;i<c;i++){flag=1;
	for(j=0;j<r;j++){
		if(a[j][i]=='S') {flag=0; break;}
		
	}
	if(flag==1) cc++;
	}
	
	cout<<(rc*c)+(cc*r)-(rc*cc);
	
}
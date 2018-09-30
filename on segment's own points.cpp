#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j;
cin>>n;
int a,b,c,d;
cin>>a>>b;
vector<int>rope(100);
fill(rope.begin(),rope.end(),1);
for(i=0;i<n-1;i++){
	cin>>c>>d;
	
	for(j=c;j<d;j++){
		rope[j]=0;
	}
}
 c=0;

for(i=a;i<b;i++){
	if(rope[i]==1) c++;
	
	
}
cout<<c;
}

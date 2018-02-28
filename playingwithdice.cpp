#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,i,c1=0,c2=0,c3=0;
	cin>>a>>b;
	for(i=1;i<=6;i++){
		if(abs(i-a)<abs(i-b)) c1++;
		else if(abs(i-a)>abs(i-b)) c2++;
		else c3++;

	}
	cout<<c1<<" "<<c3<<" "<<c2;
}
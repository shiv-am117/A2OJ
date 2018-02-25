#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,count1,count2,count3,minm,pos1,pos2,pos3;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++) cin>>a[i];
		count1=count(a,a+n,1);
		count2=count(a,a+n,2);
		count3=count(a,a+n,3);
		minm=min(count1,min(count2,count3));
		cout<<minm<<endl;
		for(i=0;i<minm;i++){
			pos1=distance(a,find(a,a+n,1));
			pos2=distance(a,find(a,a+n,2));
			pos3=distance(a,find(a,a+n,3));
			a[pos1]=-1;a[pos2]=-1;a[pos3]=-1;
			cout<<pos1+1<<" "<<pos2+1<<" "<<pos3+1<<endl;

		}
}
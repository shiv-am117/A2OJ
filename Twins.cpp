#include<bits/stdc++.h>
using namespace std;
int main(){
int k,i,sum=0;
cin>>k;
int a[k];
for(i=0;i<k;i++)cin>>a[i];
sort(a,a+k,greater<int>());
for(i=0;i<k;i++){
	sum=sum+a[i];
	if(sum>accumulate(a+i+1,a+k,0)) break;
}
for(i=0;i<k;i++)cout<<a[i];
}
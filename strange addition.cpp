#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j=0,c=0,k=INT_MAX,temp,mod,num,nz=0;
	map<int,int> check;
	
	cin>>n;
	vector<int> z(n);
	int s[n];
	for(i=0;i<n;i++) cin>>s[i];
	for(i=0;i<n;i++){
		c=0;
		num=0;
		temp=s[i];
		if(temp==0) {
		z[j++]=0;
		continue;
	}
		while(temp){
			mod=temp%10;
			temp/=10;
			num++;
			
			if(mod==0) c++;
		}
		if(c==0&&check[0]==0){
			if(k>num) {
			k=num;
			nz=s[i];
		}
		}
	
		if(num==c+1&&check[c]==0) {
			check[c]=1;
			z[j++]=s[i];
		}
		
		
	}
	if(check[0]==0&&nz!=0){
		for(i=1;i<k;i++){
			if(check[i]==1) break;
		}
		if(i==k) z[j++]=nz;
	}
	cout<<j<<endl;
	for(i=0;i<j;i++) cout<<z[i]<<" ";
}
	


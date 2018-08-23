#include<bits/stdc++.h>
using namespace std;
int main(){
int p,i,j,c=0,flag;
long long temp;
cin>>p;
for(i=1;i<p;i++){
		flag=1;
		temp=1;
		for(j=1;j<=p-1;j++){
			temp*=i;
			temp%=p;
			if(j==p-1){
				if(temp!=1)
				flag=0;
			}
			else if(temp==1) flag=0;
		}
		if(flag) c++;
	}

cout<<c;
}

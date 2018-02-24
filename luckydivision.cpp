#include<bits/stdc++.h>
using namespace std;
vector <int> a;
void insert(int n){
	if(n>1000) return;
a.push_back(n*10+4); insert(n*10+4);
a.push_back(n*10+7); insert(n*10+7);
}
int main(){
int n,flag=0;

cin>>n;
insert(0);
for(auto it=a.begin();it!=a.end();it++) {
	if(n%(*it)==0) flag=1;
}
if(flag==0) cout<<"NO";
else cout<<"YES";
}

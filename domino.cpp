#include<bits/stdc++.h>
using namespace std;
   int main()
    {
    	int n,i,sum1,sum2,a,b;
    	cin>>n;
    	vector<pair<int,int>> dom;
    	for(i=0;i<n;i++) {cin>>a>>b;dom.push_back(make_pair(a,b));}
    	sum1=accumulate(dom.begin(),dom.end(),0,[](auto &a, auto &b){return a + b.first;});
    	sum2=accumulate(dom.begin(),dom.end(),0,[](auto &a, auto &b){return a + b.second;});
    	if(sum1%2==0&&sum2%2==0) {cout<<0; return 0;}
    	if((sum1%2==0&&sum2%2!=0)||(sum1%2!=0&&sum2%2==0)) {cout<<-1; return 0;}
    	for(i=0;i<n;i++){
    		if((dom[i].first%2==0&&dom[i].second%2!=0)||(dom[i].first%2!=0&&dom[i].second%2==0)){cout<<1; return 0;}
    	}
    	cout<<-1;
    }
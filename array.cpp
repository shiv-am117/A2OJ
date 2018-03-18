#include<bits/stdc++.h>
using namespace std;
   int main()
    {
    	int n,i,co=0,k=0,l=0;
    	cin>>n;
    	int a[n];
    	vector<int> b,c,d;
    	for(i=0;i<n;i++) cin>>a[i];
    		int m=count_if(a,a+n,[](int x){return x<0;});
    		if(m%2==0) co=1;
    	for(i=0;i<n;i++){
    		if(a[i]>0) b.push_back(a[i]);
    		else if(a[i]==0) d.push_back(a[i]);
    		else if(a[i]<0&&co==1) {co--;d.push_back(a[i]);}
    		else c.push_back(a[i]);
    	}
    	 if(b.size()==0) {k=2;l=2;}
    cout<<c.size()-l<<" ";
    	for(i=k;i<c.size();i++) cout<<c[i]<<" ";
    	cout<<endl;
    	cout<<l+b.size()<<" ";
    	for(i=0;i<k;i++) cout<<c[i]<<" ";
    	for(i=0;i<b.size();i++) cout<<b[i]<<" ";
    	cout<<endl; 
    cout<<d.size()<<" ";
    	for(i=0;i<d.size();i++) cout<<d[i]<<" ";
    	cout<<endl; 
    }
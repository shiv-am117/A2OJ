#include<bits/stdc++.h>
using namespace std;
   int main()
    {
    	int n,m,i;
    	cin>>n>>m;
    	int a[n],b[m];
    	for(i=0;i<n;i++) cin>>a[i];
    	for(i=0;i<m;i++) cin>>b[i];
    	int test=max(*min_element(a,a+n)*2,*max_element(a,a+n));
    	if(test<*min_element(b,b+m)) cout<<test;
    	else cout<<-1;
    	cout<<endl;
    }
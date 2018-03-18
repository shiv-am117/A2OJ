#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j,c=0,c1,c2,c3,c4;
cin>>n;
pair<int,int> points[n];
for(i=0;i<n;i++) cin>>points[i].first>>points[i].second;
	for(i=0;i<n;i++){c1=c2=c3=c4=0;
		for(j=0;j<n;j++){
			if(points[j].first==points[i].first&&points[j].second>points[i].second) c1++;
			else if(points[j].first==points[i].first&&points[j].second<points[i].second) c2++;
			else if(points[j].first>points[i].first&&points[j].second==points[i].second) c3++;
			else if(points[j].first<points[i].first&&points[j].second==points[i].second) c4++;
		}
		if(c1>=1&&c2>=1&&c3>=1&&c4>=1) c++;

	}
	cout<<c;
}
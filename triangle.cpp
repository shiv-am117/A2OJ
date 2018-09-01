#include<bits/stdc++.h>
using namespace std;
bool tr(int x1,int x2,int y1,int y2,int x3,int y3){
	int a,b,c;
	a=pow(x1-x2,2)+pow(y1-y2,2);
b=pow(x3-x2,2)+pow(y3-y2,2);
c=pow(x1-x3,2)+pow(y1-y3,2);
if(a==0||b==0||c==0) return false;
if(a+b==c||a+c==b||b+c==a) return true;
else return false;
}

int main(){
int x1,y1,x2,x3,y2,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
int a,b,c;
a=pow(x1-x2,2)+pow(y1-y2,2);
b=pow(x3-x2,2)+pow(y3-y2,2);
c=pow(x1-x3,2)+pow(y1-y3,2);

if(a+b==c||a+c==b||b+c==a) {
cout<<"RIGHT";return 0;}
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
for(int i=0;i<4;i++){
	if(tr(x1-dx[i],x2,y1-dy[i],y2,x3,y3)) {
		cout<<"ALMOST";
		return 0;
	}
	if(tr(x1,x2-dx[i],y1,y2-dy[i],x3,y3)) {
		cout<<"ALMOST";
		return 0;
	}
		if(tr(x1,x2,y1,y2,x3-dx[i],y3-dy[i])) {
		cout<<"ALMOST";
		return 0;
	}
}

cout<<"NEITHER";
}

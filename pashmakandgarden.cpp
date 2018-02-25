#include<bits/stdc++.h>
using namespace std;
int main(){
	int x1,y1,x2,y2,d,x3,x4,y3,y4;
	cin>>x1>>y1>>x2>>y2;
	if(x1!=x2&&y1!=y2&&abs(y2-y1)!=abs(x2-x1)) {cout<<"-1"; return 0;}
	if(x1==x2) abs(d=(y2-y1));
	else d=abs(x2-x1) ;
	if(y1==y2){y3=y1+d;y4=y2+d; cout<<x1<<" "<<y3<<" "<<x2<<" "<<y4;}
	else if(x1==x2){cout<<x1+d<<" "<<y1<<" "<<x2+d<<" "<<y2;}
	else {
		if(x2>x1&&y2>y1) {x3=x1;x4=x1+d;y3=y1+d;y4=y1;}
		else if(x2>x1&&y2<y1) {x3=x1;x4=x1+d;y3=y1-d;y4=y1;}
		else if(x2<x1&&y2>y1) {x3=x1;x4=x1-d;y3=y1+d;y4=y1;}
		else if(x2<x1&&y2<y1) {x3=x1;x4=x1-d;y3=y1-d;y4=y1;}
		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
	}
}
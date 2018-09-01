#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,int> tone;
	tone["C"]=0;tone["C#"]=1;tone["D"]=2;tone["D#"]=3;tone["E"]=4;tone["F"]=5;tone["F#"]=6;tone["G"]=7;tone["G#"]=8;tone["A"]=9;tone["B"]=10;tone["H"]=11;
	string a,b,c;
	cin>>a>>b>>c;
	if((tone[a]+7)%12==tone[b]){
		if((tone[a]+3)%12==tone[c]){
		cout<<"minor"; return 0;}
		if((tone[a]+4)%12==tone[c]) {
		cout<<"major"; return 0;}
	}
	if((tone[b]+7)%12==tone[c]){
			if((tone[b]+4)%12==tone[a]) {
			cout<<"major"; return 0;}
		if((tone[b]+3)%12==tone[a]){
		 cout<<"minor";return 0;}
	}
	if((tone[c]+7)%12==tone[a]){	if((tone[c]+3)%12==tone[b]) {
	cout<<"minor";return 0;}
		if((tone[c]+4)%12==tone[b]){
		 cout<<"major";return 0;}
	}
	if((tone[a]+7)%12==tone[c]){	if((tone[a]+3)%12==tone[b]) {
	cout<<"minor";return 0;}
		if((tone[a]+4)%12==tone[b]){cout<<"major";return 0;}
	}
	if((tone[b]+7)%12==tone[a]){	if((tone[b]+3)%12==tone[c]) {
	cout<<"minor";return 0;} 
		if((tone[b]+4)%12==tone[c]) {
		cout<<"major";return 0;}
	}
	if((tone[c]+7)%12==tone[b]){	if((tone[c]+3)%12==tone[a]) {
	cout<<"minor"; return 0;}
		if((tone[c]+4)%12==tone[a]) {
		cout<<"major";return 0;}
	}
	cout<<"strange";

}

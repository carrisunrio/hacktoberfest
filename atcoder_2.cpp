#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	//Input two integer variables
	cin>>a;
	cin>>b;
	int i=1;//Initializing i with 1
	while(a==b){
		cout<<i;
	}
	while(a*i<b){
		i++;
		continue;
	}
		cout<<i;
	//returning 0 value to OS
	return 0;
}

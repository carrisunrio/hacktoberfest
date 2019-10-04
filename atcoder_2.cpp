#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin>>a;
	cin>>b;
	int i=1;
	while(a==b){
		cout<<i;
	}
	while(a*i<b){
		i++;
		continue;
	}
		cout<<i;

	return 0;
}

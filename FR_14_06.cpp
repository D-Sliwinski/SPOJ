#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,c=0,w=0,pom;
	cin >> t;
	int p[t];
	for(int i=0;i<t;i++)
		cin >> p[i];
	pom=p[0];
	sort(p,p+t);
	for(int i=0;i<t;i++){
		if(pom==p[i])
			c++;
		else if(pom!=p[i]){
			w+=c/3;
			pom=p[i];
			c=1;
		}
		if(i==t-1)
			w+=c/3;
	}
	cout << w;
}

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string n,pom;
	int t,a;
	cin >> n;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a;
		if(a>0){
			for(int i=0;i<n.length();i++){
				 cout << n[i];
				 if(i<n.length()-1)
				 	for(int ii=0;ii<a-1;ii++)
				 		cout << ' ';
			}
			if(i<t-1)
				cout << endl;
		}
		else if(a<0){
			a*=-1;
			pom=n;
			reverse(pom.begin(),pom.end());
			for(int i=0;i<pom.length();i++){
				 cout << pom[i];
				 if(i<pom.length()-1)
				 	for(int ii=0;ii<a-1;ii++)
				 		cout << ' ';
			}
			if(i<t-1)
				cout << endl;
		}
		else
			if(i<t-1)
				cout << n[n.length()-1] << endl;
	}	
}

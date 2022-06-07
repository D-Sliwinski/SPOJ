#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,c=0;
	cin >> t;
	int s[t];
	for(int i=0;i<t;i++){
		cin >> s[i];
	}
	sort(s,s+t);
	for(int i=1;i<=t;i++){
		if(s[i]!=s[i-1]){
			c++;
		}
	}
	cout << c;
}

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string p,s;
	int t,b=0;
	cin >> p >> t;
	for(int i=0;i<t;i++){
		cin >> s;
		sort(s.begin(), s.end());
		sort(p.begin(), p.end());
		if(s==p){
			b++;
		}
	}
	cout << b;
}

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,d,max;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> d;
		int n[d];
		for(int i=0;i<d;i++){
			cin >> n[i];
			if(n[i]>max)
				max=n[i];
		}
		for(int i=0;i<d;i++){
			if(n[i]==max)
				cout << n[i] << ' ';
		}
		sort(n,n+d);
		for(int i=0;i<d;i++){
			if(n[i]!=max)
				cout << n[i] << ' ';
		}
		max=0;
		cout << endl;
	}
}

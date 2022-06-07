#include <iostream>
using namespace std;
int main() {
	int t,n;
	long long pom=0,w=0;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n;
		w+=n;
		if(w>pom){
			pom=w;
		}
		if(w<0){
			w=0;
		}
	}
	cout << pom << endl;
}

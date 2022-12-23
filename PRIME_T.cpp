#include <iostream>
#include <cmath>
using namespace std;
const int N = 100000;
bool sito[N+1];
int main() {
	std::ios::sync_with_stdio(false);
	int t,p,a;
	sito[1]=1;
	p=sqrt(N);
	for(int i=2; i<=p; i++) {
		if(sito[i]==0) {
			for(int j=i*2; j<=N; j+=i) {
				sito[j]=1;
			}
		}
	}
	cin >> t;
	while(t--){
		cin >> a;
		if(sito[a]==0) {
			cout << "TAK" << endl;
		} 
		else{
			cout << "NIE" << endl;
		}
	}
}

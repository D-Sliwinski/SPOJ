#include <iostream>
using namespace std;
int main(){
	int t;
	long long n,w;
	cin >> t;
	while(t--){
		cin >> n;
		w=1;
		for(int i=2;i<=n;i++){
			w*=i;
			while(w%10==0){
				w/=10;
				w%=10000;
			}            
		}
		cout << w%10 << endl;
	}
}

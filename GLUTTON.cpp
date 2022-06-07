#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t,N,w,M,czas,d=86400; 
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> N >> M;
		for(int z=0;z<N;z++){
			cin >> czas;
			w+=d/czas;
		}
		if(w%M==0){
			cout << w/M << endl;
			w=0;
		}
		else{
			cout << (w/M)+1 << endl;
			w=0;
		}
	}
}

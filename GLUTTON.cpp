#include <iostream>
using namespace std;
int main(){
	int t1,t2,il,a,cz,w=0;
	cin >> t1;
	for(int i=0;i<t1;i++){
		cin >> t2 >> il;
		for(int i=0;i<t2;i++){
			cin >> a;
			w+=86400/a;
		}
		if(w%il==0)
			cout << w/il << endl;
		else
			cout << (w/il)+1 << endl;
		w=0;
	}
}

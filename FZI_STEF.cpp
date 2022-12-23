#include <iostream>
using namespace std;
int main(){
	long long t,w=0,a,max=0;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a;
		w+=a;
		if(w>max)
			max=w;
		if(w<0)
			w=0;
	}
	cout << max << endl;
}

#include <iostream>
using namespace std;
int main(){
	int c,k,w,t;
	cin >> t;
	while(t--){
		cin >> c >> k >> w;
		if(c*w<=k)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t,a,p;
	cin >> t;
	while(t--){
		cin >> a;
		p=sqrt(a);
		if(a==pow(p,2)&&a>0)
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
}

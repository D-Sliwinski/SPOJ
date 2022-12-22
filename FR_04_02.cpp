#include <iostream>
using namespace std;
int main(){
	int t,n,k;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n >> k;
		if(n%2==1)
			cout << "BRAK\n";
		else{
			if(k>n/2)
				cout << k-(n/2) << "\n";
			else
				cout << k+(n/2) << "\n";
		}
	}
}

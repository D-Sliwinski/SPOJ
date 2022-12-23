#include <iostream>
using namespace std;
int main(){
	string n;
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n;
		int dl = n.length();
		for(int i=0;i<dl/2;i++)
			cout << n[i];
		cout << endl;
	}
}

#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int t;
	string a,b;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a >> b;
		for(int i=0;i<min(a.length(),b.length());i++)
			cout << a[i] << b[i];
		cout << endl;
	}
}

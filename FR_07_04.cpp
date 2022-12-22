#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
	int t;
	float w,a,b,c=100;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a >> b;
		w=(a/100)*c;
		c=c-w;
		w=(b/100)*c;
		c=c-w;
		cout << fixed << setprecision(2) << 100-c << endl;
		w=0;
		c=100;
	}
}

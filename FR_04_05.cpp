#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int t;
	double r1,r2;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> r1 >> r2;
		cout << fixed << setprecision(2) << 2*r1*r2 << endl;
	}
}

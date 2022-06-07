#include <iostream>
using namespace std;
int main(){
	int t,a,silnia=1;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a;
		for(int i=1;i<=a;i++){
			silnia*=i;
		}
		cout << silnia/10%10 << " " << silnia%10 << " " << endl;
		silnia=1;
	}
}

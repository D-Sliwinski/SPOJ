#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(c%33==0)
		cout << "WRACAJ\n";
	else{
		if(a<b)
			cout << "W LEWO\n";
		else if(b<a)
			cout << "W PRAWO\n";
	}
}

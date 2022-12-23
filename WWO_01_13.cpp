#include <iostream>
using namespace std;
int main(){
	string a,b,c;
	cin >> a >> b >> c;
	if(c>a&&c<b||c==a)
		cout << "dzien";
	else
		cout << "noc";
}

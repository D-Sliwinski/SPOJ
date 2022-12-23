#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string n,n2="sto";
	int x;
	cin >> n;
	x=n.find(n2);
	if(x!=-1)
		cout << "TAK";
	else
		cout <<"NIE";
}

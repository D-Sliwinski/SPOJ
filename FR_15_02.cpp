#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,c=0;
	cin >> t;
	int nr[t];
	string nazw;
	for(int i=0;i<t;i++)
		cin >> nr[i] >> nazw;
	sort(nr,nr+t);
	for(int i=0;i<t;i++)
		if(nr[i]!=nr[i-1])
			c++;
	cout << c;
}

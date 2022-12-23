#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,x,a2;
	char a;
	cin >> t;
	int n[t];
	for(int i=0;i<t;i++)
		cin >> n[i];
	cin >> a >> a2;
	if(a=='<')
		for(int i=0;i<t;i++)
			if(n[i]<a2)
				cout << n[i] << endl;
	else if(a=='>')
		for(int i=0;i<t;i++)
			if(n[i]>a2)
				cout << n[i] << endl;
}

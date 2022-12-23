#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	unsigned long long t,c=0;
	cin >> t;
	unsigned long long a[t];
	for(int i=0;i<t;i++)
		cin >> a[i];
	sort(a,a+t);
	for(int i=0;i<t;i++){
		if(a[i]!=a[i+1])
			c++;
	}
	cout << c << endl;
	c=0;
}

#include <iostream>
using namespace std;
int main(){
	int t,c=0;
	cin >> t;
	int a[t];
	for(int i=0;i<t;i++)
		cin >> a[i];
	for(int i=0;i<t-2;i++)
		if(a[i]<a[i+1]&&a[i+1]>a[i+2])
			c++;
	cout << c;
}

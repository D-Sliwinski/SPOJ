#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int c=0;
	string n[100000];
	while(cin>>n[c])
		c++;
	sort(n,n+c);
	for(int i=0;i<c;i++)
		cout<<n[i]<<endl;
}

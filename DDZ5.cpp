#include <iostream>
using namespace std;
int main(){
	int t,a,c=0;
	cin >> t;
	int tab[t];
	for(int i=0;i<t;i++)
		cin >> tab[i];
	for(int i=0;i<t;i++)
		if(tab[i]+tab[i+1]==tab[i+2])
			c++;
	cout << c;
}	


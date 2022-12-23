#include <iostream>
using namespace std;
int main(){
	int t,b;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> b;
		int tab[b];
		for(int i=0;i<b;i++)
			cin >> tab[i];
		for(int i=b-1;i>=0;i--)
			cout << tab[i] << " ";
		cout << endl;
	}	
}

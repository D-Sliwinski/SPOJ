#include <iostream>
using namespace std;
int main(){
	int t,t2;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> t2;
		int tab[t2];
		for(int i=0;i<t2;i++)
			cin >> tab[i];	
		for(int i=0;i<t2;i++)
			if(i%2==1)
				cout << tab[i] << " ";
		for(int i=0;i<t2;i++)
			if(i%2==0)
				cout << tab[i] << " ";
		cout << endl;
	}
}

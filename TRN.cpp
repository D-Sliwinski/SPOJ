#include <iostream>
using namespace std;
int main(){
	int a,b,c=0;
	cin >> a >> b;
	int tab[a*b];
	for(int i=0;i<a*b;i++){
		cin >> tab[i];
	}
	for(int i=0;i<b;i++){
		for(int z=0;z<a*b;z++){
			if(z%b-c==0){
				cout << tab[z] << " ";
			}
		}
		cout << endl;
		c++;
	}
}

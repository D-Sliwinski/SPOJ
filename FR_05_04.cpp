#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	string im[t],n[t],cz[t];
	string min="ZZ:ZZ";
	for(int i=0;i<t;i++){
		cin >> im[i] >> n[i] >> cz[i];
		if(cz[i]<min)
			min=cz[i];
	}
	for(int i=0;i<t;i++)
		if(cz[i]==min)
			cout << im[i] << ' ' << n[i] << endl;
}

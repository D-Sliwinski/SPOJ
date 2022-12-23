#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,max=0;
	string tab[7]={"pon","wt","sr","czw","pt","sob","niedz"};
	int tab2[7] = {0,0,0,0,0,0,0};
	cin >> t;
	string n[t];
	for(int i=0;i<t;i++){
		cin >> n[i];
		if(n[i]==tab[0])
			tab2[0]++;
		else if(n[i]==tab[1])
			tab2[1]++;
		else if(n[i]==tab[2])
			tab2[2]++;
		else if(n[i]==tab[3])
			tab2[3]++;
		else if(n[i]==tab[4])
			tab2[4]++;
		else if(n[i]==tab[5])
			tab2[5]++;
		else if(n[i]==tab[6])
			tab2[6]++;
	}
	max=tab2[0];
	for(int i=0;i<7;i++){
		if(max<tab2[i])
			max=tab2[i];
	}
	cout << max << ' ' << t;
}

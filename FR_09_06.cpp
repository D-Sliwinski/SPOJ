#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,pom_min=0,pom_max=0;
	string w;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> w;
		int l[w.length()];
		for(int x=0;x<w.length();x++)
			l[x]=int(w[x]);
		sort(l,l+w.length());
		cout << l[w.length()-1]-l[0] << endl;
	}
}

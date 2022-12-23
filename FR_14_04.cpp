#include <iostream>
using namespace std;
int main(){
	int w=0,w2=0;
	string a,b;
	cin >> a >> b;
	for(int i=0;i<a.length();i++){
		if(a[i]=='T')
			w+=10;
		else if(a[i]=='J')
			w+=11;
		else if(a[i]=='Q')
			w+=12;
		else if(a[i]=='K')
			w+=13;
		else if(a[i]=='A')
			w+=14;
		else
			w+=a[i]-48;
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='T')
			w2+=10;
		else if(b[i]=='J')
			w2+=11;
		else if(b[i]=='Q')
			w2+=12;
		else if(b[i]=='K')
			w2+=13;
		else if(b[i]=='A')
			w2+=14;
		else
			w2+=b[i]-48;
	}
	if(w>w2)
		cout << "JASIO";
	else if(w2>w)
		cout << "STASIO";
	else
		cout << "REMIS";
}

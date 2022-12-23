#include <iostream>
using namespace std;
int main(){
	string n;
	int t,dl;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n;
		int dl = n.length();
		for(int i=0;i<dl;i++){
			if(n[i]=='A'||n[i]=='B'||n[i]=='C')
				cout << 2;
			if(n[i]=='D'||n[i]=='E'||n[i]=='F')
				cout << 3;
			if(n[i]=='G'||n[i]=='H'||n[i]=='I')
				cout << 4;
			if(n[i]=='J'||n[i]=='K'||n[i]=='L')
				cout << 5;
			if(n[i]=='M'||n[i]=='N'||n[i]=='O')
				cout << 6;
			if(n[i]=='P'||n[i]=='Q'||n[i]=='R'||n[i]=='S')
				cout << 7;
			if(n[i]=='T'||n[i]=='U'||n[i]=='V')
				cout << 8;			
			if(n[i]=='W'||n[i]=='X'||n[i]=='Y'||n[i]=='Z')
				cout << 9;	
		}
		cout << endl;
	}
}

#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int b,i;
	string n;
	while(getline(cin, n)){
		int dl = n.length();
		for(i=0;i<dl;i++){
			if(n[i]=='<'){
				cout << n[i];
				while(n[i]!='>'){
					i++;
					n[i]=toupper(n[i]);
					cout << n[i];
				}
			}
			else
				cout << n[i];
		}
		cout << endl;	
	}
}

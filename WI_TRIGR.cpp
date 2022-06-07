#include <iostream>
using namespace std;
int main(){
	string n;
	while(getline(cin, n)){
		int dl = n.length();
		for(int i=0;i<dl;i++){
			if(n[i]=='?'){
				n[i++];
				if(n[i]=='?'){
					n[i++];
					if(n[i]=='='){
						n[i]='#';
					}
					if(n[i]=='/'){
						n[i]='a';
					}
					if(n[i]==39){
						n[i]=92;
					}
					if(n[i]=='('){
						n[i]='[';
					}
					if(n[i]==')'){
						n[i]=']';
					}
					if(n[i]=='!'){
						n[i]='|';
					}
					if(n[i]=='<'){
						n[i]='{';
					}
					if(n[i]=='>'){
						n[i]='}';
					}
					if(n[i]=='-'){
						n[i]='~'; 
					}
				}
			}
			cout << n[i];
		}
	}
}

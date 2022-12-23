#include <iostream>
using namespace std;
int main(){
	string n;
	std::ios_base::sync_with_stdio;
	while(getline(cin, n)){
		int dl = n.length();
		for(int i=0;i<dl;i++){
			if(n[i]=='?'){
				n[i++];
				if(n[i]=='?'){
					n[i++];
					if(n[i]=='=')
						n[i]='#';
					else if(n[i]=='/')
						n[i]='a';
					else if(n[i]==39)
						n[i]=92;
					else if(n[i]=='(')
						n[i]='[';
					else if(n[i]==')')
						n[i]=']';
					else if(n[i]=='!')
						n[i]='|';
					else if(n[i]=='<')
						n[i]='{';
					else if(n[i]=='>')
						n[i]='}';
					else if(n[i]=='-')
						n[i]='~'; 
				}
			}
			cout << n[i];
		}
	}
}

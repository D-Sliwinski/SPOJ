#include <iostream>
using namespace std;
int main(){
	string n;
	int dl,c=0;
	while(getline(cin,n)){
		dl = n.length();
		for(int i=0;i<dl;i++){
			if(n[i]=='?'||n[i]=='!')
				c++;
			else if(n[i]=='.'&&n[i+1]!='.'){
				c++;
				if(n[i+1]=='.'&&n[i+2]=='.')
					c++;
			}
		}
	}
	cout << c;
}

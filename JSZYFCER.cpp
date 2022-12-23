#include <iostream>
using namespace std;
int main(){
	string n;
	while(getline(cin, n)){
		int dl = n.length();
		for(int i=0;i<dl;i++){
			if(n[i]!=' '&&n[i]<120&&n[i]>96||n[i]>64&&n[i]<88)
				n[i]+=3;
			else{
				if(n[i]=='X'||n[i]=='x')
					n[i]='A';	
				if(n[i]=='Y'||n[i]=='y')
					n[i]='B';
				if(n[i]=='Z'||n[i]=='z')
					n[i]='C';
			}
			if(n[i]>96&&n[i]<123)
			  	n[i]-=32;			
			cout << n[i];
		}
		cout << endl;
	}					
}	

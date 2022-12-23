#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string napis;
	int dl;
	while(getline(cin, napis)){
		dl = napis.length();
		for(int i=0;i<dl;i++){
			if(napis[i]!=32)
				cout << napis[i];
			else{
				while(napis[i]==32)
					napis[i++];
				napis[i] = toupper(napis[i]);
				cout << napis[i];
			}
		}
		cout << endl;
	}
}


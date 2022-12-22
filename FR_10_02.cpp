#include <iostream>
using namespace std;
int main(){
	int ile;
	string napis;
	cin >> ile;
	char litery[ile];
	for(int i=0;i<ile;i++)
		cin >> litery[i];
	cin >> napis;
	int dl=napis.length();
	for(int i=0;i<dl;i++){
		cout << napis[i];
		for(int j=0;j<ile;j++)
			if(napis[i]==litery[j])				
				cout << napis[i];    
 	}
}


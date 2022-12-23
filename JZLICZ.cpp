#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int z, dl,literki[123]={};
	string napis;
	cin >> z;
	cin.ignore();
	for(int i=0;i<z;i++){
		getline(cin, napis);
		for(int i=0;i<napis.length();i++)
			if(isalpha(napis[i]))
				literki[napis[i]]++;
	}
	for(int i=97;i<=122;i++)
		if(literki[i]!=0)
			cout << char(i) << ' ' << literki[i] << endl;
	for(int i=65;i<=90;i++)
		if(literki[i]!=0)
			cout << char(i) << ' ' << literki[i] << endl;
}

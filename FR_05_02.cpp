#include <iostream>
#include <cctype>
using namespace std;
int main(){
	int t;
	bool cyfra=false,duza=false,mala=false,reszta=false,dlugosc=false;
	string haslo;
	cin >> t;
	cin.ignore();
	for(int i=0;i<t;i++){
		getline(cin, haslo);
		if(haslo.length()>=8)
			dlugosc=true;
		for(int i=0;i<haslo.length();i++){		
			if(isdigit(haslo[i]))
				cyfra=true;
			else if(isupper(haslo[i]))
				duza=true;
			else if(islower(haslo[i]))
				mala=true;
			else
				reszta=true;
		}
		if(cyfra==true&&mala==true&&duza==true&&reszta==true&&dlugosc==true)
			cout << haslo << endl;
		cyfra=false,duza=false,mala=false,reszta=false,dlugosc=false;
	}
}

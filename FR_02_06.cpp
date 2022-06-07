#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin >> t;
	float masa[t],wzrost[t];
	string imie[t];
	for(int i=0;i<t;i++){
		cin >> imie[i] >> masa[i] >> wzrost[i];
	}
	cout << "niedowaga" << endl;
	for(int i=0;i<t;i++){
		if(masa[i]/pow(wzrost[i]/100,2)<18.5){
			cout << imie[i] << endl;
		}
	}
	cout << endl;
	cout << "wartosc prawidlowa" << endl;
	for(int i=0;i<t;i++){
		if(masa[i]/pow(wzrost[i]/100,2)>=18.5&&masa[i]/pow(wzrost[i]/100,2)<25){
			cout << imie[i] << endl;
		}
	}
	cout << endl;
	cout << "nadwaga" << endl;
	for(int i=0;i<t;i++){
		if(masa[i]/pow(wzrost[i]/100,2)>=25){
			cout << imie[i] << endl;
		}
	}	
}

#include <iostream>
using namespace std;
int main(){
	double mile;
	int km;
	cin >> km;
	mile=km/1.609344;
	if(mile>=0&&mile<300)
		cout << "NIE";
	if(mile>=300&&mile<500)
		cout << "SPRAWDZIMY TWOJE OBECNE BUTY";
	if(mile>=500)
		cout << "TAK";
}

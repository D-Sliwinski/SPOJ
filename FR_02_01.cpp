#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin >> t;
	string name[t];
	int weight[t],height[t];
	float bmi[t];
	for(int i=0;i<t;i++){
		cin >> name[i] >> weight[i] >> height[i];
		bmi[i]=(weight[i]/pow(height[i],2))*10000;
	}
	cout << "niedowaga" << endl;
	for(int i=0;i<t;i++)
		if(bmi[i]<18.5)
			cout << name[i] << endl;
	cout << endl << endl;
	cout << "wartosc prawidlowa" << endl;
	for(int i=0;i<t;i++)
		if(bmi[i]>=18.5&&bmi[i]<25)
			cout << name[i] << endl;
	cout << endl << endl;
	cout << "nadwaga" << endl;
	for(int i=0;i<t;i++)
		if(bmi[i]>=25)
			cout << name[i] << endl;
}

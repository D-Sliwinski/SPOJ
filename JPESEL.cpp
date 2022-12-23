#include <iostream>
using namespace std;
int main(){
	int t,dl,spr;
	string pesel;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> pesel;   	
		int dl=pesel.length();
		spr=(pesel[0]*1)+(pesel[1]*3)+(pesel[2]*7)+(pesel[3]*9)+(pesel[4]*1)+(pesel[5]*3)+(pesel[6]*7)+(pesel[7]*9)+(pesel[8]*1)+(pesel[9]*3)+(pesel[10]*1);
		if(spr%10==0)
			cout << 'D' << endl;
		else
			cout << 'N' << endl;
	}
}

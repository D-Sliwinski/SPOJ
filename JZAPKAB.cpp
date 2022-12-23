#include <iostream>
using namespace std;
int main(){
	int w=0;
	string n;
	cin >> n;
	for(int i=0;i<n.length();i++){
		if(n[i]=='a')
			w+=1;
		else if(n[i]=='b')
			w+=2;
		else if(n[i]=='c')
			w+=3;
		else if(n[i]=='d')
			w+=4;
		else if(n[i]=='e')
			w+=5;
		else if(n[i]=='f')
			w+=6;
		else if(n[i]=='g')
			w+=7;
		else if(n[i]=='h')
			w+=8;
		else if(n[i]=='i')
			w+=9;
		else if(n[i]=='k')
			w+=10;
		else if(n[i]=='l')
			w+=20;
		else if(n[i]=='m')
			w+=30;
		else if(n[i]=='n')
			w+=40;
		else if(n[i]=='o')
			w+=50;
		else if(n[i]=='p')
			w+=60;
		else if(n[i]=='q')
			w+=70;
		else if(n[i]=='r')
			w+=80;
		else if(n[i]=='s')
			w+=90;
		else if(n[i]=='t')
			w+=100;
		else if(n[i]=='v')
			w+=200;
		else if(n[i]=='x')
			w+=300;
		else if(n[i]=='y')
			w+=400;
		else if(n[i]=='z')
			w+=500;
	}
	cout << w;
}

#include <iostream>
using namespace std;
int main() {
	string n;
	while(getline(cin, n)){
		int dl = n.length();
		for(int i=0;i<dl;i++){
			if(n[i]==65||n[i]==97){
				cout << ".-/";
			}
			if(n[i]==66||n[i]=='b'){
				cout <<"-.../";
			}
			if(n[i]==67||n[i]=='c'){
				cout <<"-.-./";
			}
			if(n[i]==68||n[i]=='d'){
				cout <<"-../";
			}
			if(n[i]==69||n[i]=='e'){
				cout <<"./";
			}
			if(n[i]==70||n[i]=='f'){
				cout <<".-../";
			}
			if(n[i]=='G'||n[i]=='g'){
				cout <<"--./";
			}
			if(n[i]=='H'||n[i]=='h'){
				cout <<"..../";
			}
			if(n[i]=='I'||n[i]=='i'){
				cout <<"../";
			}
			if(n[i]=='J'||n[i]=='j'){
				cout <<".---/";
			}
			if(n[i]=='K'||n[i]=='k'){
				cout <<"-.-/";
			}
			if(n[i]=='L'||n[i]=='l'){
				cout <<"..-./";
			}
			if(n[i]=='M'||n[i]=='m'){
				cout <<"--/";
			}
			if(n[i]=='N'||n[i]=='n'){
				cout <<"-./";
			}
			if(n[i]=='O'||n[i]=='o'){
				cout <<"---/";
			}
			if(n[i]=='P'||n[i]=='p'){
				cout <<".--./";
			}
			if(n[i]=='Q'||n[i]=='q'){
				cout <<"--.-/";
			}
			if(n[i]=='R'||n[i]=='r'){
				cout <<".-./";
			}
			if(n[i]=='S'||n[i]=='s'){
				cout <<".../";
			}
			if(n[i]=='T'||n[i]=='t'){
				cout <<"-/";
			}
			if(n[i]=='U'||n[i]=='u'){
				cout <<"..-/";
			}
			if(n[i]=='V'||n[i]=='v'){
				cout <<"...-/";
			}
			if(n[i]=='W'||n[i]=='w'){
				cout <<".--/";
			}
			if(n[i]=='X'||n[i]=='x'){
				cout <<"-..-/";
			}
			if(n[i]=='Y'||n[i]=='y'){
				cout <<"-.--/";
			}
			if(n[i]=='Z'||n[i]=='z'){
				cout <<"--../";
			}
			if(n[i]==32){
				cout << '/';
			}
		}	
		cout << endl;
	}
		
}

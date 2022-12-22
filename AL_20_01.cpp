#include <iostream>
using namespace std;
int main() {
	string n;
	while(getline(cin, n)){
		int dl = n.length();
		for(int i=0;i<dl;i++){
			if(n[i]=='A'||n[i]=='a'){
				cout << ".-/";
			}
			else if(n[i]=='B'||n[i]=='b'){
				cout <<"-.../";
			}
			else if(n[i]=='C'||n[i]=='c'){
				cout <<"-.-./";
			}
			else if(n[i]=='D'||n[i]=='d'){
				cout <<"-../";
			}
			else if(n[i]=='E'||n[i]=='e'){
				cout <<"./";
			}
			else if(n[i]=='F'||n[i]=='f'){
				cout <<".-../";
			}
			else if(n[i]=='G'||n[i]=='g'){
				cout <<"--./";
			}
			else if(n[i]=='H'||n[i]=='h'){
				cout <<"..../";
			}
			else if(n[i]=='I'||n[i]=='i'){
				cout <<"../";
			}
			else if(n[i]=='J'||n[i]=='j'){
				cout <<".---/";
			}
			else if(n[i]=='K'||n[i]=='k'){
				cout <<"-.-/";
			}
			else if(n[i]=='L'||n[i]=='l'){
				cout <<"..-./";
			}
			else if(n[i]=='M'||n[i]=='m'){
				cout <<"--/";
			}
			else if(n[i]=='N'||n[i]=='n'){
				cout <<"-./";
			}
			else if(n[i]=='O'||n[i]=='o'){
				cout <<"---/";
			}
			else if(n[i]=='P'||n[i]=='p'){
				cout <<".--./";
			}
			else if(n[i]=='Q'||n[i]=='q'){
				cout <<"--.-/";
			}
			else if(n[i]=='R'||n[i]=='r'){
				cout <<".-./";
			}
			else if(n[i]=='S'||n[i]=='s'){
				cout <<".../";
			}
			else if(n[i]=='T'||n[i]=='t'){
				cout <<"-/";
			}
			else if(n[i]=='U'||n[i]=='u'){
				cout <<"..-/";
			}
			else if(n[i]=='V'||n[i]=='v'){
				cout <<"...-/";
			}
			else if(n[i]=='W'||n[i]=='w'){
				cout <<".--/";
			}
			else if(n[i]=='X'||n[i]=='x'){
				cout <<"-..-/";
			}
			else if(n[i]=='Y'||n[i]=='y'){
				cout <<"-.--/";
			}
			else if(n[i]=='Z'||n[i]=='z'){
				cout <<"--../";
			}
			else if(n[i]==32){
				cout << '/';
			}
		}	
		cout << endl;
	}	
}

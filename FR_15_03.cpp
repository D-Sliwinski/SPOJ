#include <iostream>
using namespace std;
int main(){
	int t;
	int tab;
	int c=0;
	string wybor;
	int gra[100]={};
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> tab >> wybor;	
		if(wybor=="bede"||wybor=="ja"||wybor=="gram")
			gra[tab]=1;
		else if(wybor=="odpadam"||wybor=="rezygnuje")
			gra[tab]=0;
	}
	for(int i=0;i<=100;i++){
		if(gra[i]==1)
			c++;			
	}
	if(c>=10)
		cout << "Gramy! Bedzie nas " << c;	
	else
		cout << "Nie gramy :( Jest nas tylko " << c;
}

#include <iostream>
using namespace std;
int main(){
	int osoby=0,t1,t2,a=0,b=0;
	bool error=false;
	string znak;
	cin >> t1;
	for(int i=0;i<t1;i++){
		cin >> t2; 
		for(int i=0;i<t2;i++){
			cin >> znak;
			if(znak=="AI")
				a++;
			else if(znak=="BO")
				a--;
			else if(znak=="BI")
				b++;
			else if(znak=="AO")
				b--;
			if(a<0)
				error=true;
			else if(b<0)
				error=true;
		}
		if(error)
			cout << "ERROR\n";
		else
			cout << a+b <<"\n";
		error=false;	
		a=0;
		b=0;
	}	
}

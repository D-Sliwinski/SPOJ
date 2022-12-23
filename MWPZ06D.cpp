#include <iostream>
using namespace std;
int main(){
	int t,l,c;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> l >> c;
		if(c!=0&&l!=0){
			if(l==1)
				cout << "TAK" << endl;
			else if(c%(l-1)==0)
				cout << "NIE" << endl;
			else
				cout << "TAK" << endl;
		}
		else
			cout << "NIE" << endl;
	}
}

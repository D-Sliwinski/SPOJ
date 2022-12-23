#include <iostream>
using namespace std;
int main(){
	string n; 
	char du;
	while(cin>>du>>n){
		int dl = n.length();
		for(int i=0;i<dl;i++){
			if(n[i]==du)
				n[i]=8;
			else
				cout << n[i];
		}
		cout << endl;
	}
}

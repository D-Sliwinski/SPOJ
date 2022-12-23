#include <iostream>
using namespace std;
int main(){
	string n;
	while(getline(cin, n)){
		for(int i=0;i<n.length();i++){
			if(n[i]>=65&&n[i]<=77||n[i]>=97&&n[i]<=109)
				n[i]+=13;
			else if(n[i]>=78&&n[i]<=90||n[i]>=110&&n[i]<=122)
				n[i]-=13;
			if(n[i]>=48&&n[i]<=52)
				n[i]+=5;
			else if(n[i]>=53&&n[i]<=57)
				n[i]-=5;
			cout << n[i];
		}
		cout << endl;
	}
}

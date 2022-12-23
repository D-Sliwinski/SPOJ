#include <iostream>
#include <cctype>
using namespace std;
int main(){
	string n;
	cin >> n;
	for(int i=0;i<n.length();i++){
		if(n[i]!='_')
			cout << n[i];
		else{
			i++;
			cout << char(n[i]-32);	
		}
	}
}

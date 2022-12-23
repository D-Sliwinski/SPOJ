#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string a,b;
	cin >> a >> b;
	if(char(a[0]+1)==b[0]){
		if(char(a[1]-2)==b[1]||char(a[1]+2)==b[1])
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
	else if(char(a[0]-1)==b[0]){
		if(char(a[1]-2)==b[1]||char(a[1]+2)==b[1])
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
	else if(char(a[0]+2)==b[0]){
		if(char(a[1]-1)==b[1]||char(a[1]+1)==b[1])
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
	else if(char(a[0]-2)==b[0]){
		if(char(a[1]-1)==b[1]||char(a[1]+1)==b[1])
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
	else
		cout << "NIE" << endl;
}

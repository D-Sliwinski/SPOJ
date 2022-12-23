#include <iostream>
using namespace std;
int main(){
	int a,b,c,h;
	cin >> a;
	for(int i=0;i<a;i++){
		cin >> b;
		for(int g=0;g<b;g++){
			cin >> c;
			h+=c;
		}
		cout << h << endl;
			h=0;
	}
}

#include <iostream>
using namespace std;
int main(){
	int a,w=0;
	for(int i=0;i<10;i++){
		cin >> a;
		for(int i=1;i<=a;i++)
			w+=i;
		cout << w << endl;
		w=0;
	}	
}

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b,w;
	for(int i=0;i<4;i++){
		cin >> a >> b;
		w+=a-b;
	}
	cout << w;
}

#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	if(2*b-a>=15&&2*b-a<=30)
		cout << 2*b-a;
	else
		cout << "NIE DA SIE";
}

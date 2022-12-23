#include <iostream>
using namespace std;
int main(){
	int ax,ay,bx,by,cx,cy,t;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> ax >> ay >> bx >> by >> cx >> cy;
		if((ax*by+bx*cy+cx*ay)-(ay*bx+by*cx+cy*ax)==0)
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
}

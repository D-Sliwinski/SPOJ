#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float a,b,c,x;
	while(cin >> a >> b >> c){
		if(a==0&&b!=c)
			cout << "BR" << endl;
		else if(a==0&&b==c)
			cout << "NWR" << endl;
		else
			cout << fixed << setprecision(2) << (c-b)/a << endl;
	}	
}

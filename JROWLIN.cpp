#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float a,b,c,x;
	cin >> a >> b >> c;
	x=(c-b)/a;
	if(a!=0&&b!=c){
		cout << fixed << setprecision(2) << x;
	}
	else if(b==c&&a==0){
		cout << "NWR";
	}
	else if(a==0&&b!=0&&b!=c){
		cout << "BR";
	}
}

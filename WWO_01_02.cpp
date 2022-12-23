#include <iostream>
using namespace std;
int main(){
	int a,b,c,sciany,dach;
	cin >> a >> b >> c;
	std::ios_base::sync_with_stdio;
	sciany=(2*(a*c))+(2*(b*c));
	dach=a*b;
	if(sciany%5!=0)
		sciany=(sciany/5)+1;
	else
		sciany/=5;
	if(dach%3!=0)
		dach=(dach/3)+1;
	else
		dach/=3;
	cout << sciany+dach << endl;
}

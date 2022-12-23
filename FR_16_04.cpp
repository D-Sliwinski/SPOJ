#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a;
	cin >> a;
	float nad,mn=0;
	if(a>1000)
		nad=(a-1000)*1;
	else
		nad=0;
	if(a>1000)
		mn=0.5;
	else if(a<1000&&a>=900)
		mn=0.45;
	else if(a>=800&&a<900)
		mn=0.4;
	else if(a>=700&&a<800)
		mn=0.35;
	else if(a>=600&&a<700)
		mn=0.30;
	else if(a>=500&&a<600)
		mn=0.25;
	else if(a>=400&&a<500)
		mn=0.20;
	else if(a>=300&&a<400)
		mn=0.15;
	else if(a>=200&&a<300)
		mn=0.10;
	else if(a>=100&&a<200)
		mn=0.05;
	if(a>=1000)
		cout << fixed << setprecision(2) << 1000*0.5+nad;
	else
		cout << fixed << setprecision(2) << a*mn;
}

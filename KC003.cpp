#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float a,b,c,max,min1,min2;
	while(cin >> a >> b >> c){
		if(a>b&&a>c){
			max=a;
			min1=b;
			min2=c;
		}
		if(b>a&&b>c){
			max=b;
			min1=a;
			min2=c;
		}
		if(c>a&&c>b){
			max=c;
			min1=a;
			min2=b;
		}
		if(max<min1+min2)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}	
}

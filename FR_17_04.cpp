#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t;
	double nm,sm,ng,sg,p_m,p_g;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> nm >> sm >> ng >> sg;
		 p_m=nm*(pow(sm,2));
		 p_g=ng*(pow(sg,2));
		if(p_m==p_g){
			cout << "porcje sa takie same\n";
		}
		else if(p_m<p_g){
			cout << "Grzesiek\n";
		}
		else{
			cout << "Maciek\n";
		}
	}
}

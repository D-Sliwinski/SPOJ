#include <iostream>
using namespace std;
int main(){
	bool test=true,test2=true;
	string n;
	int pocz,konc;
	cin >> n;
	if(test==true)
		for(int i=0;i<n.length();i++)
			if(n[i]=='0'){
				test=false;
				pocz=i;
				break;
			}
	if(test2==true)
		for(int i=n.length();i>0;i--)
			if(n[i]=='1'){
				test=false;
				konc=i;
				break;
			}
	if(pocz>konc||konc-pocz==1)
		cout << "PUSTY";
	else
		for(int i=pocz+1;i<konc;i++)
			cout << n[i];
}

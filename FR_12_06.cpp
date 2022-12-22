#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int p=0,m=0;
	string a;
	cin >> a;
	for(int i=0;i<a.length();i++){
		if(a[i]=='+')
			p++;
		if(a[i]=='-')
			p--;
	}
	if(p/3>0)
		for(int i=0;i<p/3;i++)
			cout << 5 << " ";
	else if(p/3<0){
		p*=-1;
		for(int i=0;i<p/3;i++)
			cout << 1 << " ";
	}
	else
		cout << "BRAK";
}

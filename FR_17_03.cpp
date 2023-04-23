#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	string w="";
	cin >> a >> b;
	if(a>0&&b>0&&b!=a)
		w='1';
	else if(a==b)
		w='2';
	for(int i=0;i<max(a,b);i++)
		w+='0';
	if(a!=b)
		w[max(a,b)-min(a,b)]='1';
	if(a==0&&b>0||b==0&&a>0){
		w='1';
		for(int i=0;i<max(a,b);i++)
			w+='0';
		w[w.length()-1]='1';
	}
	cout << w;
}	

#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	if(a==0&&b==0){
		cout << "f(x)=0";
	}
	else{
		cout << "f(x)=";
	}
	if(a==0){
		if(b!=0)
			cout << b;
	}
	else if(a==1){
		cout << 'x';
		if(b==0){
		}
		else if(b>0)
			cout << '+' << b;
		else
			cout << b;
	}
	else if(a==-1){
		cout << "-x";
		if(b==0){
		}
		else if(b>0)
			cout << '+' << b;
		else
			cout << b;
	}
	else{
		cout << a << 'x';
		if(b==0){
		}
		else if(b>0)
			cout << '+' << b;
		else
			cout << b;
	}
}

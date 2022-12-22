#include <iostream>
using namespace std;
int main(){
	char z;
	int a,b;
	while(cin >> z >> a >> b){
		if(z=='+')
			cout << a+b << endl;
		if(z=='-')
			cout << a-b << endl;
		if(z=='*')
			cout << a*b << endl;
		if(z=='/'&&b>0)
			cout << a/b << endl;
		if(z=='%')
			cout << a%b << endl;
	}
}

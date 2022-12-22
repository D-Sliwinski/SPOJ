#include <iostream>
using namespace std;
int main(){
	int a,b,lc[10];
	char z;
	while(cin >> z >> a >> b){
		if(z=='z')
			lc[a]=b;
		if(z=='+')
			cout << lc[a]+lc[b] << endl;		
		if(z=='-')
			cout << lc[a]-lc[b] << endl;		
		if(z=='*')
			cout << lc[a]*lc[b] << endl;		
		if(z=='/')
			cout << lc[a]/lc[b] << endl;		
		if(z=='%')
			cout << lc[a]%lc[b] << endl;		
	}
} 

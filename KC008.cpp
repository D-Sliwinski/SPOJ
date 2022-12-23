#include <iostream>
using namespace std;
int main(){
	long long l,s=0,sk=0;
	while(cin >> l){
		if(l!=0){
			s+=l;
		}
		else{
			cout << s << endl;
			sk+=s;		
			s=0;
		}
	}
	cout << sk << endl;
}

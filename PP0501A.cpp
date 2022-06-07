#include <iostream>
using namespace std;
int main(){
	int a,b,t,nwd;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a >> b;
		while(a!=b){
			if(a>b){
				a-=b;
			}
			else{
				b-=a;
			}
		}
		cout << endl;
		cout << a << endl;
	}
}

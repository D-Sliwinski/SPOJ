#include <iostream>
using namespace std;
int main(){
	int t,w,c=1;
	char n[200];	
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n;
		for(int i=0;i<=200;i++){
			if(n[i]==NULL)
				break;
			if(c<3){
				if(n[i]==n[i+1])
					c++;
				else
					c=1;
				if(c<3)
					cout << n[i];
			}
			else{
				if(n[i]==n[i+1])
					c++;
				else{
					cout << c;
					c=1;
				}
			}
		}
		cout << endl;
	}
}

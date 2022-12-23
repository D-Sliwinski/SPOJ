#include <iostream>
using namespace std;
int main(){
	int t,w,l;
	string a;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a;
		w=0;
		for(int i=0;i<a.length();i++){
			if(i==0){
				if(a[0]=='-')
					w+=char(a[1]-48);
					w*=-1;
				else if(a[0]!='-')
					w+=char(a[0]-48);
			}
			else{
				if(a[i]=='-')
					w-=char(a[i+1]-48);
				else if(a[i]=='+')
					w+=char(a[i+1]-48);	
			}
		}
		cout << w << "\n";
		w=0;
	}               
}

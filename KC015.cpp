#include <iostream>
using namespace std;
int main(){
	int c=0;
	string n,a,b;
	while(cin >> a >> n >> b){
		if(n=="=="){
			if(a.length()==b.length()){
				for(int i=0;i<a.length();i++){
					if(a[i]!=b[i]){
						cout << 0 << endl;
						break;
					}
					else
						c++;
					if(c==a.length()){
						cout << 1 << endl;
						c=0;
						break;
					}				
				}
			}
			else
				cout << 0 << endl;
		}
		else if(n=="<="){
			if(a.length()<b.length())
				cout << 1 << endl;
		    else if(b.length()<a.length())
				cout << 0 << endl;
			else{
				for(int i=0;i<a.length();i++){
					if(a[i]>b[i]){
						cout << 0 << endl;
						c=1;
					}
				}
				if(c!=1){
					cout << 1 << endl;
					c=0;
				}
			}
		}
		else if(n==">="){
			if(a.length()<b.length())
				cout << 0 << endl;
			else if(b.length()<a.length())
				cout << 1 << endl;
			else{
				for(int i=0;i<a.length();i++){
					if(a[i]>b[i]){
						cout << 1 << endl;
						c=1;
					}
				}
				if(c!=1){
					cout << 0 << endl;
					c=0;
				}
			}
		}
		else if(n=="!="){
			if(a.length()==b.length()){
				for(int i=0;i<a.length();i++){
					if(a[i]!=b[i]){
						cout << 1 << endl;
						break;
					}
					else
						c++;
					if(c==a.length()){
						cout << 0 << endl;
						c=0;
						break;
					}				
				}
			}
			else
				cout << 1 << endl;
		}
		c=0;
	}	
}

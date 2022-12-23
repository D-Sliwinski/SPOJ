#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string to_hex(int a){
	string w;
	while(a!=0){
			if(a%16<10)
				w.push_back(char(a%16+48));
			else
				w.push_back(char(a%16+55));
			a/=16;
		}
		reverse(w.begin(),w.end());
		return w;
}
string to_ele(int a){
	string w;
	while(a!=0){
			if(a%11<10)
				w.push_back(char(a%11+48));
			else
				w.push_back(char(a%11+55));
			a/=11;
		}
		reverse(w.begin(),w.end());
		return w;
}
int main(){
	int t,a;
	string w;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a;
		cout << to_hex(a) << ' ' << to_ele(a) << endl;
	}
}

#include <iostream>
#include <algorithm>
using namespace std;	
int main(){     
	string s,w;
	cin >> s;
	int licz=1,licz2;
	if(s.length()%2==0){
		licz2=0;
		for(int i=0;i<s.length()/2;i++){
			cout << s[s.length()-licz];
			licz+=2;
		}
		for(int i=0;i<s.length()/2;i++){
			cout << s[licz2];
			licz2+=2;
		}
	}
	else{
		licz2=s.length()-1,licz=1;
		for(int i=0;i<s.length()/2+1;i++){
			cout << s[licz2];
			licz2-=2;
		}
		for(int i=0;i<s.length()/2;i++){
			cout << s[licz];
			licz+=2;
		}
	}
}

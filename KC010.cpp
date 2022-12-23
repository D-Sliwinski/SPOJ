#include <iostream>
#include <cctype>
using namespace std;
int main(){
	int nmbr=0,str=0;
	string n;
	while(getline(cin,n)){
		for(int i=1;i<n.length();i++){
			if(isalpha(n[i-1])&&isspace(n[i]))
				str++;
			if(isdigit(n[i-1])&&isspace(n[i]))
				nmbr++;
		}
		if(isalpha(n[n.length()-1]))
			str++;
		if(isdigit(n[n.length()-1]))
			nmbr++;
		cout << nmbr << ' ' << str << endl;
		nmbr=0;
		str=0;
	}
}

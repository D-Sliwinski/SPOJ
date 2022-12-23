#include <iostream>
using namespace std;
int main(){
	string n;
	int w=0,liczba_int=0;
	string liczba="";
	getline(cin,n);
	for(int i=0;i<n.length();i++)
		if(n[i]>='0'&&n[i]<='9'){
			liczba.push_back(n[i]);
			if(n[i+1]<'0'||n[i+1]>'9'){
				liczba_int=atoi(liczba.c_str());
				w+=liczba_int;
				liczba="";
			}
		}	
	cout << w;
}

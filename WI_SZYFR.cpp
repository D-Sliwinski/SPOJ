#include <iostream>
using namespace std;
int main(){
	string what_to_do,t_j,t_z,k_str;
	int k,ii;
	std::ios_base::sync_with_stdio;
	cin >> what_to_do >> k >> t_j;
	k_str=to_string(k);
	if(what_to_do=="SZYFRUJ"){
		for(int i=0;i<t_j.length();i++){
			cout << char(t_j[i]+(k_str[ii]-48));
			ii++;
			if(ii>=k_str.length())
				ii=0;
		}
	}
	else if(what_to_do=="DESZYFRUJ"){
		for(int i=0;i<t_j.length();i++){
			cout << char(t_j[i]-(k_str[ii]-48));
			ii++;
			if(ii>=k_str.length())
				ii=0;
		}
	}
}

#include<iostream>
using namespace std;
int main(){
	string s,w1,w2;
	cin >> s;
	if(s[0]=='1'||s[0]=='0'){
		w1="DDDD";
		for(int i=0;i<s.length();i++){
			if(s[i]=='1'){
				if(w1[i+3]=='D'){
					w1+='G';
				}
				else{
					w1+='D';
				}
			}
			else{
				if(w1[i+3]=='D'){
					w1+='D';
				}
				else{
					w1+='G';
				}
			}
		}
		cout << w1;
	}
	else{
		for(int i=0;i<s.length();i++){
			if(s[i+3]=='D'){
				if(s[i+4]=='D'){
					w2+='0';
				}
				else{
					w2+='1';
				}
			}
			else{
				if(s[i+4]=='G'){
					w2+='0';
				}
				else{
					w2+='1';
				}
			}
		}
		for(int i=0;i<4;i++){
			w2.pop_back();
		}
		cout << w2;
	}

}


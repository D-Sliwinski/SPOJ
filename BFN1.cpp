#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int l=0,w=0,t;
	string s1,w_s,w_rev,s1_rev;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> s1;    
		int test=stoi(s1); 
		string s1_rev_test=s1;
		reverse(s1.begin(),s1.end());    	
		if(test<10||s1_rev_test==s1){
			cout << s1 << ' ' << 0 << '\n';
		}
		else{
			while(s1!=s1_rev){
				s1_rev=s1; 
				reverse(s1_rev.begin(),s1_rev.end()); 
				int i1=stoi(s1); 
				int i2=stoi(s1_rev); 
				w=i1+i2; 
				l++; 
				w_s = to_string(w); 
				w_rev = w_s;
				reverse(w_rev.begin(),w_rev.end()); 
				s1=w_s; 
				s1_rev=w_rev;
			}
			cout << s1 << ' ' << l << '\n';
		}
		s1="";
		l=0;
	}		
}

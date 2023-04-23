#include <iostream>
using namespace std;
int main(){
	string s;
	int c1=0,c2=0,c3=0,c4=0;
	cin >> s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='{')
			c1++;
		else if(s[i]=='[')
			c2++;
		else if(s[i]=='<')
			c3++;
		else if(s[i]=='(')
			c4++;	
	}
	for(int i=1;i<s.length();i++){
		if(s[i]=='}'&&s[i-1]!='['&&s[i-1]!='('&&s[i-1]!='<')
			c1--;
		else if(s[i]==']'&&s[i-1]!='{'&&s[i-1]!='('&&s[i-1]!='<')
			c2--;
		else if(s[i]=='>'&&s[i-1]!='['&&s[i-1]!='('&&s[i-1]!='{')
			c3--;	
		else if(s[i]==')'&&s[i-1]!='['&&s[i-1]!='{'&&s[i-1]!='<')
			c4--;
	}
	if(c1==0&&c2==0&&c3==0&&c4==0)
		cout << "Tak";
	else
	 	cout << "Nie";
	cout << c1 << ' ' << c2 << ' ' << c3 << ' ' << c4;
}

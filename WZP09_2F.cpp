#include <iostream>
using namespace std;
int main(){
	int s_c;
	string a;
	while(cin>>a&&a!="0"){
		for(int i=0;i<a.length();i++)
			s_c+=char(a[i]-48);
		if(s_c%3==0&&a[a.length()-1]=='0'||s_c%3==0&&a[a.length()-1]=='5')
			cout << "TAK\n";
		else
			cout << "NIE\n";
		s_c=0;
	}
}

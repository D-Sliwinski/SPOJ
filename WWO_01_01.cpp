#include <iostream>
using namespace std;
int main(){
	int a,b,j;
	int f=0,m=0,pair=0;
	string name;
	cin >> a >> b >> j;
	for(int i=0;i<a;i++){
		cin >> name;
		if(name[name.length()-1]=='a')
			f++;
		else if(name[name.length()-1]!='a')
			m++;
		if(f>0&&m>0){
			pair++;
			f--;
			m--;
		}
	}
	for(int i=0;i<b;i++){
		cin >> name;
		if(name[name.length()-1]=='a')
			f++;
		else if(name[name.length()-1]!='a')
			m++;
		if(f>0&&m>0){
			pair++;
			f--;
			m--;
		}
	}
	for(int i=0;i<j;i++){
		cin >> name;
		if(name[name.length()-1]=='a')
			f++;
		else if(name[name.length()-1]!='a')
			m++;
		if(f>0&&m>0){
			pair++;
			f--;
			m--;
		}
	}
	cout << pair;
}

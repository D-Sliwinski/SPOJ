#include <iostream>
using namespace std;
int main(){
	int a,b,c=0,m;
	cin >> a >> b;
	int l[a*b];
	for(int i=0;i<a*b;i++)
		cin >> l[i];
	for(int x=0;x<b;x++){
			for(int z=0;z<a*b;z++)
				if((z-c)%b==0)
					cout << l[z] << ' ';
			c++;
		cout << endl;
	}
}

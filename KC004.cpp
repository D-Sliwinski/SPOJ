#include <iostream>
using namespace std;
int main(){
	int sz,dl,ciag,c=0;
	while(cin >> sz >> dl){
		for(int i=0;i<dl;i++){
			cin >> ciag;
			if(ciag==sz)
				c++;
		}
		cout << c << endl;
		c=0;
	}
}

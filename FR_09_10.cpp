#include <iostream>
using namespace std;
int main(){
	int t,a,b;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a >> b;	
		if(a%2==0)
			a++;
		bool test=false;	
		for(int i=a;i<b;i+=1)
			if(i%2==0){
				cout << i << " ";
				test=true;
			}	
		if(test==false)
			cout << "BRAK";
		cout << endl;	
	}
}


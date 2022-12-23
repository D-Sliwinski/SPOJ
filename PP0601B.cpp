#include <iostream>
using namespace std;
int main(){
	int n,x,y,t;
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> n >> x >> y;
		for(int i=0;i<n;i++)
			if(i%x==0&&i%y!=0)
				cout << i << " ";			
		cout << endl;
	}
}

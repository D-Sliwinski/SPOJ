#include <iostream>
using namespace std;
int main(){
	int a, b, i;
	cin >> a >> b;
	for(int i=a;i<=b;i++){
		if(i%6==0)
			cout << "ab";
		else if(i%2==0)
			cout << "a";
		else if(i%3==0)
			cout << "b";
	}
}

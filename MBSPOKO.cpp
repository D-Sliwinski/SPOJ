#include <iostream>
using namespace std;
int main() {
	int t;
	while(cin >> t){
		if(t%3==0&&t%5==0)
			cout << "SPOKOKOKO" << endl;
		else if(t%3==0)
			cout << "KOKO" << endl;
		else if(t%5==0)
			cout << "SPOKO"<< endl;
		else
			cout << t<< endl;
	}
}

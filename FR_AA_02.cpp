#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b,w;
	cin >> a >> b;
	w=a%10;
	w*=2;
	w+=5;
	w*=50;
	w+=1771;
	w-=b;
	cout << w%10+w/10%10*10;
}

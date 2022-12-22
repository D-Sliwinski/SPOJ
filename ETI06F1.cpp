#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;
int main(){
	double r_kw,r,d,w;
	cin >> r >> d;
	r_kw = sqrt((r*r)-((d*d)/4));
    w=3.141592654*r_kw*r_kw;
	cout << setprecision(5) << w;
}

#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;
int main(){
	double pr_kw,r,d,w;
	cin >> r >> d;
	pr_kw = (d*d)-((r*r)/4);
    w=3.141592654*pr_kw;
	cout << setprecision(5) << w;
}

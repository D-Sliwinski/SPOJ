#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float m16,k16,m36,k36;
	int m16a,k16a,m36a,k36a;
	cin >> m16 >> k16 >> m36 >> k36;
	cin >> m16a >> k16a >> m36a >> k36a;
	cout << "K16K36:" << ' ' << fixed << setprecision(2) << (k16*k16a+k36*k36a)/(k16a+k36a) << endl;
	cout << "M16M36:" << ' ' << fixed << setprecision(2) << (m16*m16a+m36*m36a)/(m16a+m36a) << endl;
	cout << "M16K16M36K36:" << ' ' << fixed << setprecision(2) << (m16*m16a + k16*k16a + m36*m36a + k36*k36a)/(m16a+k16a+m36a+k36a) << endl;
}

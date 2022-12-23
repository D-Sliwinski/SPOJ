#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,min1,min2,max;
	int tab[3];
	while(cin >> a >> b >> c){
		int tab[] = {a,b,c};
		sort(tab,tab+3);
		if(tab[0]+tab[1]<=tab[2])
            cout << "brak" << endl;
        else if(pow(tab[0],2)+pow(tab[1],2)==pow(tab[2],2))
            cout << "prostokatny" << endl;
        else if(pow(tab[0],2)+pow(tab[1],2)>pow(tab[2],2))
            cout << "ostrokatny" << endl;
        else
            cout << "rozwartokatny" << endl;
	}
}

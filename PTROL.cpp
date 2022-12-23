#include <iostream>
using namespace std;
int main(){
    int t, a, tab[100];
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a;
        for(int j = 0; j < a; j++)
        	cin >> tab[j];
        for(int j = 1; j < a; j++)
        	cout << tab[j] << " ";
        cout << tab[0] <<endl;
    }
}

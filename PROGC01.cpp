#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int linie=0;
    string zlicz;
    ifstream plik("Plik tekstowy.txt");
    while(getline(cin, zlicz))
    	linie++;
    cout << linie;
    plik.close();
}

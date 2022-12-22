#include <iostream>
#include <cstring>
#include <cmath>
using namespace std; 
int main(){
	int t,pom=0;
	string napis;
	string napis2;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> napis >> napis2;
		pom = 0;
		for(int j = 0; j < napis.size(); j++){
			if(napis[j]==napis2[pom])
				pom++;
		}	
		if(napis2.size()==pom)
			cout << "Tak" << endl;
		else
			cout << "Nie" << endl;
	}
}

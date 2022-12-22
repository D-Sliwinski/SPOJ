#include <algorithm>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string s;
    bool test=false;
    cin >> s;
    sort(s.begin(), s.end());
    do{
        if(s[s.length()-1]=='0'||s[s.length()-1]=='2'||s[s.length()-1]=='4'||s[s.length()-1]=='6'||s[s.length()-1]=='8'){
        	test=true;
        	break;
		}
    }while(next_permutation(s.begin(), s.end()));
    if(test)
    	cout << "Tak";
	else
		cout << "Nie";
}

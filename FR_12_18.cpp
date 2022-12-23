#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int i,c=0;
	float a;
	int waluty[9]={500,200,100,50,20,10,5,2,1};
	cin >> a;
	int a2=a*100;
	while(a2>0){
		if(a2>=waluty[i]){
			a2-=waluty[i];
			c++;				
		}
		else
			i++;
	}
	cout << c;
}

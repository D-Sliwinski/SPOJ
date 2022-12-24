#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack<int> stos;
	char push;
	int number,size=0;
	while(cin >> push){
		if(push=='+'){
			cin >> number;
			if(size<10){
				stos.push(number);
				cout << ":)\n";
				size++; 
			}
			else{
				cout << ":(\n";
			}		
		}	
		else if(push=='-'){
			if(size>0){
				cout << stos.top() << endl;
				stos.pop();
				size--;
			}
			else{
				cout << ":(\n";
			}		 
		}		
	}
}

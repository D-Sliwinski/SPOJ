#include <iostream>
using namespace std;
int main(){
    int tab[1000];
    int i=0;
    while(cin>>tab[i])
   	 	i++;		
    while(i>0){
		i--; 
		cout<<tab[i]<<" "; 
	}
}

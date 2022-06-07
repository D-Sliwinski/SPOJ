#include <iostream>
#include <string>
using namespace std;
int main(){
    int pom,t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>c>>d;
        a = c;
        b = d;
		while(b){
		    pom = a % b;
		    a = b;
		    b = pom;    
		}
		cout<<(c*d)/a<<endl;
	}
}

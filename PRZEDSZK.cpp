#include <iostream>
#include <string>
using namespace std;
int nwd(int a, int b){
    int pom; 
	while(b!=0){
		pom=b;
		b=a%b;
		a=pom;	
	}	
   	return a;
}
int main(){
    int pom,t,c_pom,d_pom,c,d;
    cin>>t;
	for(int i=0;i<t;i++){
	    cin >> c >> d;
	    c_pom=c;
	    d_pom=d;
		c_pom=nwd(c_pom,d_pom);
	    cout<<(c*d)/c_pom<<endl;
	}
}

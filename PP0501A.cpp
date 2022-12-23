#include<iostream>
using namespace std;
int nwd(int a, int b){
    while(a!=b)
       if(a>b)
           a-=b;
       else
           b-=a; 
    return a; 
}
int main(){	
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		int a,b;
   	 	cin>>a>>b;
   		cout<<NWD(a,b)<<'\n';	
	}
}

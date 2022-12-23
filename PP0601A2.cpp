#include <iostream>
using namespace std;
int main(){
    int l,r,c=0;
    while (cin>>l){
        if(l==42&&r==1)
        	c++;
        if(l!=42){
        	r=1;
            cout<<l<<endl;
		}
        else{
            r=0;
            cout<<l<<endl;
        }
        if(c==3)
            break;
    }
}

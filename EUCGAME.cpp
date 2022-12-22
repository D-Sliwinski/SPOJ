#include <iostream>
using namespace std;
int main() {
    int a,b,r1,t;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> a >> b;
        while(a!=b){
            if(a>b)
            	a-=b; 
            else
            	b-=a;    
        }
        r1=a*2;
        cout << r1 << endl;
        r1=0;
    }
}

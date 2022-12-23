#include <iostream>
using namespace std;
int main(){
    int n, x,c=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        while(x!=1){
        	if(x%2==0){
        		x/=2;
			}
			else if(x%2!=0){
				x=3*x+1;
			}
			c++;
		}
		cout << c << endl;
		c=0;
    }
}

#include <iostream>
using namespace std;
int a,b,x,y,D,N;
int main(){
	cin >> D;
	for(int i=0;i<D;i++){
		cin >> N;
		for(int i=0;i<N;i++){
			cin >> a >> b;
			switch(a) {
				case 0:
					y+=b;
					break;
				case 1:
					y-=b;
					break;
				case 2:
					x-=b;
					break;
				case 3:
					x+=b;
					break;
			}	
		}
		if(x==0 && y==0){
			cout << "studnia\n";
		}
		
		if(y>0){
			cout << "0 " << y << '\n'; 
		}
		else if(y<0){
			cout << "1 " << y*-1 << '\n';
		}
		
		if(x>0){
			cout << "3 " << x << '\n'; 
		}
		else if(x<0){
			cout << "2 " << x*-1 << '\n'; 	
		}	
		
		x=0, y=0;
	}
}

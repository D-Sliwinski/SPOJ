#include <iostream>
#include <string>
using namespace std;
int main(){
	int t;
	cin >> t;
	string wyr;
	while(t--){
		int n2;
		char n;
		string w;
		cin >> w;
		if(w=="DODAJ"){
			cin >> n;
			wyr.push_back(n);
		}
		else if(w=="USUN"){
			cin >> n2;
			if(n2>wyr.length()){
				wyr.clear();
			}
			else{
				for(int i=0;i<n2;i++){
					wyr.pop_back();
				}
			}		
		}
		else if(w=="ZAMIEN"){
			cin >> n;
				if(wyr.length()!=0){
					wyr.pop_back();
					wyr.push_back(n);
				}							
			}
		}
	cout << wyr << endl;			
}	


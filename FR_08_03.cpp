#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	bool error=false;
	string password,hidden_password;
	for(int i=0;i<t;i++){
		cin >> password >> hidden_password;
		if(password.length()!=hidden_password.length()){
			error=true;	
		}
		else{
			for(int i=0;i<password.length();i++){
				if(hidden_password[i]!='*'&&password[i]!=hidden_password[i]){
					error=true;
				}
			}
		}
		if(error){
			cout << "error\n";
		}
		else{
			cout << "ok\n";
		}
		error=false;
	}
}

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t,liczba,z;
	cin>>t;
	string c,dzien;
	for(int i=0;i<t;i++){
		cin>>c>>liczba;
		if(liczba==0){
			dzien="Pn";
		}
		if(liczba==1){
			dzien="Wt";
		}
		if(liczba==2){
			dzien="Sr";
		}
	    if(liczba==3){
			dzien="Cz";
		}
		if(liczba==4){
			dzien="Pt";
		}
		if(liczba==5){
			dzien="So";
		}
		if(liczba==6){
			dzien="Nd";
		}
		if(c=="Pn"){
			z=0;
		}
		if(c=="Wt"){
			z=1;
		}
		if(c=="Sr"){
			z=2;
		}
		if(c=="Cz"){
			z=3;
		}
		if(c=="Pt"){
			z=4;
		}
		if(c=="So"){
			z=5;
		}
		if(c=="Nd"){
			z=6;
		}
		if((liczba+z)%7==0){
			cout<<"Pn"<<endl;
		}
		if((liczba+z)%7==1){
			cout<<"Wt"<<endl;
		}
		if((liczba+z)%7==2){
			cout<<"Sr"<<endl;
		}
		if((liczba+z)%7==3){
			cout<<"Cz"<<endl;
		}
		if((liczba+z)%7==4){
			cout<<"Pt"<<endl;
		}
		if((liczba+z)%7==5){
			cout<<"So"<<endl;
		}
		if((liczba+z)%7==6){
			cout<<"Nd"<<endl;
		}
	}
}
 

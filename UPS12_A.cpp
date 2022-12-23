#include <iostream>
using namespace std;
int main(){
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,dl;
	string napis;
	cin >> napis;
	dl = napis.length();
	for(int it=0;it<dl;it++){
		if(napis[it]=='a')
			a++;
		if(napis[it]=='b')
			b++;
		if(napis[it]=='c')
			c++;
		if(napis[it]=='d')
			d++;
		if(napis[it]=='e')
			e++;
		if(napis[it]=='f')
			f++;
		if(napis[it]=='g')
			g++;
		if(napis[it]=='h')
			h++;
		if(napis[it]=='i')
			i++;
		if(napis[it]=='j')
			j++;
	    if(napis[it]=='k')
			k++;
		if(napis[it]=='l')
			l++;
		if(napis[it]=='m')
			m++;
		if(napis[it]=='n')
			n++;
		if(napis[it]=='o')
			o++;
	    if(napis[it]=='p')
			p++;
		if(napis[it]=='q')
			q++;
		if(napis[it]=='r')
			r++;
		if(napis[it]=='s')
			s++;
		if(napis[it]=='t')
			t++;
		if(napis[it]=='u')
			u++;
		if(napis[it]=='v')
			v++;
	    if(napis[it]=='w')
			w++;
		if(napis[it]=='x')
			x++;
		if(napis[it]=='y')
			y++;
		if(napis[it]=='z')
			z++;
	}

	if(a==b&&a==c&&a==d&&a==e&&a==f&&a==g&&a==h&&a==i&&a==j&&a==k&&a==l&&a==m&&a==n&&a==o&&a==p&&a==q&&a==r&&a==s&&a==t&&a==u&&a==v&&a==w&&a==x&&a==y&&a==z)
		cout << "PANGRAM PERFEKCYJNY";
	else if(a>=1&&b>=1&&c>=1&&d>=1&&e>=1&&f>=1&&g>=1&&h>=1&&i>=1&&j>=1&&k>=1&&l>=1&&m>=1&&n>=1&&o>=1&&p>=1&&q>=1&&r>=1&&s>=1&&t>=1&&u>=1&&v>=1&&w>=1&&x>=1&&y>=1&&z>=1)
		cout << "PANGRAM";
	else
		cout << "NIE";
}
